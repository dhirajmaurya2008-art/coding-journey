alert("Enter value of a:");
let a = prompt("Enter a: ", "54");
a = Number.parseInt(a);

let write = confirm("Do you want to write on the page?");
if(write){
document.write("Value of a : ",a," and typeof a is: ",(typeof a));
}
else{
    document.write("please allow me to write on page");
}
