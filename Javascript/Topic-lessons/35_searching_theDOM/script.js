
const alertPlaceholder = document.getElementById('liveAlertPlaceholder')
const appendAlert = (message, type) => {
  const wrapper = document.createElement('div')
  wrapper.innerHTML = [
    `<div class="alert theme-${type}" role="alert">`,
    `   <p>${message}</p>`,
    '   <button type="button" class="btn-close ms-auto" data-bs-dismiss="alert" aria-label="Close"></button>',
    '</div>'
  ].join('')

  alertPlaceholder.append(wrapper)
}

const alertTrigger = document.getElementById('liveAlertBtn')
if (alertTrigger) {
  alertTrigger.addEventListener('click', () => {
    appendAlert('You triggered Alert!!')
  })
}

//change card title to red
// let cTitle = document.getElementsByClassName("card-title")[0]// multiple element using index
// cTitle.style.color = "violet";

 let cTitle1 = document.getElementById("first")// single element
cTitle1.style.color = "violet";

let cTitle2 = document.getElementById("second")// single element
cTitle2.style.color = "yellow";

let cTitle3 = document.getElementById("third")// single element
cTitle3.style.color = "orangered";


// let cTitles = document.querySelectorAll(".card-title");
// cTitles[0].style.color = "red"; 
// cTitles[1].style.color = "green"; 
// cTitles[2].style.color = "blue"; 
// console.log(cTitles);


// document.querySelector(".this").style.color = "cyan";
// document.querySelector(".this").style.background = "red";

console.log(document.getElementsByTagName("a"));
console.log(document.body.getElementsByTagName("a"));
console.log(document.querySelector(".card").getElementsByTagName("a"));
console.log(document.getElementsByName("search"));