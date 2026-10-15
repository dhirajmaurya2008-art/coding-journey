//1.for() loop:
//program add n numbers:
// let sum = 0;
// let n = prompt("Enter n value: ");
// n = Number.parseInt(n);
// for(let i = 0; i < n; i++)
// {
//     sum += (i+1);
// }     
// console.log("Sum till n =",n,"is:",sum);

//2.for() in loop:
let obj = {
    dinesh : 90,
    dhiraj : 89,
    dexter : 87,
    rita : 76,
    shivaji : 45
}
for(let a in obj)
{
    console.log("Marks of " + a + " are " + obj[a]);
}

//3.for() of in loop:
for(let b of "Hannibal")
{
    console.log(b);
} 