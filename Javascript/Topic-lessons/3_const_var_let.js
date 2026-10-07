console.log("Javascript:var, let, const");
let a  = 45;
var b = "rahul";
var c = 98;
let d = "Sorry";

//Reason not to use var keyword:
// 1.
{
    var b =  "this";
    console.log(b);
}
console.log(b);

//2.var can redeclare and updated values of variable
console.log(c);
var c = 65;
console.log(c);



//Reason to use let keyword:
// 1.
{
    let a = 34;
    console.log(a);
}
console.log(a);

// 2.let can update values of variable but cannot redeclare, hence less error
console.log(d);
d = "Its all right";
console.log(d);


// const author;  --> throws an error because it is initialized during declaration
const author = "Dhiraj";
// let author = 5; --> throws an error because const cannot be redeclared
// author = 5;     --> also throws an error because const cannot change its value
console.log(author);
