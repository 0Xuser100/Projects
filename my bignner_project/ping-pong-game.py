import turtle

wind =turtle.Screen()
wind.title("mahmoud app")
wind.bgcolor("Black")

wind.setup(width=800,height=600)
wind.tracer(0)
#madrab1
madrab1=turtle.Turtle()
madrab1.speed(0)
madrab1.shape("square")
#madrab1.color("#dbe22b")
madrab1.color("#909500")
madrab1.shapesize(stretch_wid=5,stretch_len=1)
madrab1.penup()#remove lines after animate the shape
madrab1.goto(-350,0)
#madrab2
madrab2=turtle.Turtle()
madrab2.speed(0)
madrab2.shape("square")
#madrab2.color("#dbe22b")
madrab2.color("red")
madrab2.shapesize(stretch_wid=5,stretch_len=1)
madrab2.penup()#remove lines after animate the shape
madrab2.goto(350,0)
#ball
ball=turtle.Turtle()
ball.speed(0)
ball.shape("square")
#ball.color("white")
ball.color("#dbe22b")
#ball.color("#540e95")
ball.penup()#remove lines after animate the shape
ball.goto(0,0)
ball.dx=0.2
ball.dy=0.2
#score
score1=0
score2=0
score=turtle.Turtle()
score.speed(0)
score.color("BlueViolet")
score.penup()
score.hideturtle()
score.goto(0,260)
score.write("player 1: 0 VS player 2: 0 ",align="center",font=("courier",24,"normal"))

#function
def madrab1_up():
  y =madrab1.ycor()
  y +=20
  madrab1.sety(y)

def madrab1_down():
  y=madrab1.ycor()
  y-=20
  madrab1.sety(y)


def madrab2_up():
  y =madrab2.ycor()
  y +=20
  madrab2.sety(y)

def madrab2_down():
  y=madrab2.ycor()
  y-=20
  madrab2.sety(y)

##keyboard bindings
wind.listen()
wind.onkeypress(madrab1_up, "w")
wind.onkeypress(madrab1_down, "s")
wind.onkeypress(madrab2_up, "Up")
wind.onkeypress(madrab2_down, "Down")
#main_gameloop
while True:
    wind.update()
    ball.setx(ball.xcor()+ball.dx)
    ball.sety(ball.ycor()+ball.dy)

    if ball.ycor()>290:
         ball.sety(290)
         ball.dy*=-1

    if ball.ycor() < -290:
      ball.sety(-290)
      ball.dy *= -1

    if ball.xcor()>390:
      ball.goto(0,0)
      ball.dx*=-1
      score1+=1
      score.clear()
      score.write("player 1: {} VS player 2: {} ".format(score1,score2), align="center", font=("courier", 24, "normal"))

    if ball.xcor() < -390:
        ball.goto(0, 0)
        ball.dx *= -1
        score2+=1
        score.clear()
        score.write("player 1: {} VS player 2: {} ".format(score1,score2), align="center", font=("courier", 24, "normal"))

    if (ball.xcor()>340 and ball.xcor()<350) and (ball.ycor()<madrab2.ycor()+40 and ball.ycor()>madrab2.ycor() -40):
        ball.setx(340)
        ball.dx*=-1

    if (ball.xcor()<-340 and ball.xcor()>-350) and (ball.ycor()<madrab1.ycor()+40 and ball.ycor()>madrab1.ycor() -40):
        ball.setx(-340)
        ball.dx*=-1
