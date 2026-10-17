let a = 1;
let b = 2;
let c = 3;

//1:
function onePlusAverage(x, y)
{
    return (1 + ((x + y)/2));
}

console.log("One plus Average of a and b is: ",onePlusAverage(a, b));
console.log("One plus Average of b and c is: ",onePlusAverage(b, c));
console.log("One plus Average of a and c is: ",onePlusAverage(a, c));

//2:
const sum = (p, q) => {
    return (p+q);
}

console.log("Sum is: ",sum(34, 75));
