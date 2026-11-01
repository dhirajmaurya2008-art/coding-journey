//Q1:
let arr1 = [2, 3, 4, 67, 39, 23];
let a = prompt("Enter a number: ");
a = Number.parseInt(a);
arr1.push(a);
console.log(arr1);

//Q2:
let arr2 = [2, 3, 4, 67, 39, 23];
let b;
do {
    b = prompt("Enter a number: ");
    b = Number.parseInt(a);
    arr2.push(a);
    console.log(arr2);
} while (a != 0);

//Q3:
let arr3 = [10, 2, 3, 40, 50, 60, 7, 80, 9, 100];
let newArray1 = arr3.filter((x) => {
    return x % 10 == 0;
});
console.log(newArray1);

//Q4:
let arr4 = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100];
let newArray2 = arr4.map((x) => {
    return x * x;
});
console.log(newArray2);

//Q5:
let arr5 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let newArray3 = arr5.reduce((x1,x2) => {
    return x1 * x2;
});
console.log(newArray3);