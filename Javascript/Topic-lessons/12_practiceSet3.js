//Q1:
let marks = {
    Dinesh : 87,
    Harshvardhan : 93,
    Aaryan : 33
}

for(let i = 0; i < Object.keys(marks).length; i++)
{
    console.log("The marks of " + Object.keys(marks)[i] + " are: " + marks[Object.keys(marks)[i]]);
}
console.log(" ");

//Q2:
for(let i in marks)
{
    console.log("The marks of " + i + " are: " + marks[i]);
}

//Q3:
// let correctNo = 4;
// let i;
// while(i != correctNo)
// {
//     console.log("try again!");
//     i = prompt("Enter number: ");
// }
// console.log("You have entered correct number");

//Q4:
const mean = (a, b, c, d) => {
    return ((a+b+c+d)/4);
}
console.log("Mean of 4 numbers is: ", mean(2,5,7,4));

