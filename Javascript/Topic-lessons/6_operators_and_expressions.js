console.log("Operators in Javascript: ");
console.log("1.Arithmetic Operator in Javascript: ");
let a = 10;
let b = 4;
console.log("a + b = ",a+b);
console.log("a - b = ",a-b);
console.log("a * b = ",a*b);
console.log("a / b = ",a/b);
console.log("a % b = ",a%b);
console.log("a ** b = ",a**b);
console.log("a++ = ",a++);
console.log("a-- = ",a--);
console.log("++a = ",++a);
console.log("--a = ",--a);

console.log("2.Assignment Operator in Javascript: ");
a = 20;
console.log("a += 20 = ",a += 20);
console.log("a -= 20 = ",a -= 20);
console.log("a *= 20 = ",a *= 20);
console.log("a /= 20 = ",a /= 20);
console.log("a %= 20 = ",a %= 20);
console.log("a **= 20 = ",a **= 20);

console.log("3.Comparison Operator in Javascript: ");
let x = 6;
let y = 7;
console.log("x == y ",x == y);
console.log("x != y ",x != y);
console.log("x === y ",x === y);
console.log("x !== y ",x !== y);
console.log("x > y ",x > y);
console.log("x < y ",x < y);
console.log("x >= y ",x >= y);
console.log("x <= y ",x <= y);

console.log("4.Logical Operator in Javascript: ");
let m = 5;
let n = 6;
console.log("(m<n) && (m==5) ",(m>n) && (m==5));
console.log("(m>n) || (m==5) ",(m>n) || (m==5));
console.log("!(m==5) ",!(m==5));

console.log("5.Ternary Opeerator in Javascript: ");
let v = 60;
let w = 70;
console.log("Bigger value between ",v," and ",w," is: ",((v>w)?v:w));