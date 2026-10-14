//prompt and alert function:
let a = prompt("Whats your age?");
a = Number.parseInt(a); // convert string to number

let b = 45;
if(b < 0)
{
    alert("This is invalid age\n");
}
else if(b<9)
{
    alert("You are a kid.\n");}
else if(b < 18 && b >= 9)
{
    alert("You cannot drive now\n");
}
else
{
    alert("This is valid age for driving\n");
}
      
console.log("You can ", (b > 18) ? "drive" : "not drive");
