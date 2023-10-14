import PyPDF2
from transformers import pipeline
import os
from flask import Flask, render_template, request
from werkzeug.utils import secure_filename

app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = 'uploads'  # Create an 'uploads' directory in your project

if not os.path.exists(app.config['UPLOAD_FOLDER']):
    os.makedirs(app.config['UPLOAD_FOLDER'])

# Function to extract text from a PDF file
def extract_text_from_pdf(file_path):
    with open(file_path, 'rb') as f:
        pdf_reader = PyPDF2.PdfReader(f)
        text = ''
        for page in pdf_reader.pages:
            text += page.extract_text()
        return text

# Function to summarize text
def summarize_text(text, max_length=150):
    summarizer = pipeline("summarization")
    summary = []

    # Split the text into segments (adjust the segment length as needed)
    segment_length = 1000
    segments = [text[i:i + segment_length] for i in range(0, len(text), segment_length)]

    for segment in segments:
        segment_summary = summarizer(segment, max_length=max_length, min_length=50, do_sample=False)
        summary.append(segment_summary[0]["summary_text"])

    return '\n'.join(summary)

# Function to save text to a file
def save_text_to_file(text, file_path):
    with open(file_path, 'w', encoding='utf-8') as file:
        file.write(text)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/upload', methods=['POST'])
def upload():
    if 'pdf_file' in request.files:
        pdf_file = request.files['pdf_file']
        if pdf_file.filename != '':
            # Securely save the uploaded file
            filename = secure_filename(pdf_file.filename)
            pdf_file.save(os.path.join(app.config['UPLOAD_FOLDER'], filename))

            # Process the saved PDF file
            pdf_text, summary = process_pdf(os.path.join(app.config['UPLOAD_FOLDER'], filename))

            # Return the summary in the summary.html template
            return render_template('summary.html', pdf_text=pdf_text, summary=summary)

    return "File not uploaded or processed successfully."

def process_pdf(pdf_file):
    # Extract text from the PDF
    pdf_text = extract_text_from_pdf(pdf_file)

    # Summarize the extracted text
    summary = summarize_text(pdf_text, max_length=150)

    return pdf_text, summary

if __name__ == "__main__":
    app.run(debug=True)
