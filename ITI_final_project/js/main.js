let firstName = document.getElementById("firstname")
let lastName = document.getElementById("lastname")
let userName = document.getElementById("username")
let pass = document.getElementById("password")
let email = document.getElementById("email")
let age = document.getElementById("age")
let country = document.getElementById("country")
let gender = document.getElementsByName("gender")
let intersts = document.getElementsByName("intersts")
let form = document.querySelector("#form")

const genderr = document.querySelector(".genderr")
const interestss = document.querySelector(".interestss")



form.addEventListener("submit", (e) => {
   let usernameValed = false
   let passValid = false
   let arrGender = []
   let arrInterest = []


   // check if gender doesnot checked
   gender.forEach(el => {
      if (el.checked) {
         arrGender.push(el)
      }
   })



   // check if interests <2
   intersts.forEach(el => {
      if (el.checked) {
         arrInterest.push(el)
      }
   })


   // valid username
   let username = userName.value.replace(/^\s+|\s+$/gm, '').split(" ")

   if (username.length == 1) {
      usernameValed = true
   }



   // valid password
   var paswd = /^(?=.*\d)(?=.*[a-zA-Z])[a-zA-Z0-9!@#$%&*]{6,20}$/;
   if (pass.value.match(paswd)) {
      passValid = true
   }




   // add class is-invaled
   if (!firstName.value) {
      firstName.classList.add("is-invalid")
   } else {
      firstName.classList.remove("is-invalid")
   }


   if (!lastName.value) {
      lastName.classList.add("is-invalid")
   } else {
      lastName.classList.remove("is-invalid")
   }


   
   if (!userName.value||usernameValed === false) {
      userName.classList.add("is-invalid")
   } else {
      userName.classList.remove("is-invalid")
   }

   if ( !pass.value || passValid === false) {
      pass.classList.add("is-invalid")
   } else {
      pass.classList.remove("is-invalid")
   }

   if ( !email.value ) {
      email.classList.add("is-invalid")
   } else {
      email.classList.remove("is-invalid")
   }

   if ( !age.value ) {
      age.classList.add("is-invalid")
   } else {
      age.classList.remove("is-invalid")
   }

   if (arrGender.length == 0) {
      genderr.classList.add("not-valid")
   } else {
      genderr.classList.remove("not-valid")
   }

   if (arrInterest.length < 2) {
      interestss.classList.add("not-valid")
   } else {
      interestss.classList.remove("not-valid")
   }

   if ( !email.value|| !age.value|| !firstName.value ||!lastName.value || usernameValed === false ||  arrGender.length==0 || arrInterest.length<2 || passValid==false  ) {
      e.preventDefault()
   }else{
      e.preventDefault()
      window.open('thanks.html','_blank');
   }

})


// remove after typing in field
function removeIsInvaled(ele){
   
   ele.addEventListener("input",(e)=>{
      e.target.classList.remove("is-invalid")
   })

}


removeIsInvaled(firstName)
removeIsInvaled(lastName)
removeIsInvaled(userName)
removeIsInvaled(pass)
removeIsInvaled(email)
removeIsInvaled(age)