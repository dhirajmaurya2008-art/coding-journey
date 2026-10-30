let num = [1,2,3,4,5,6,7,8,9,10];
console.log(num, num.length);
delete num[0];
console.log(num, num.length);

let num1 = [10,20,30,40,50];
let num2 = [60,70,80,90,100];
let concatnum12 = num1.concat(num2);
console.log(concatnum12);

let arr = [2,87,34,1,8,3,33,99]; //sorts according to alphabetical order
arr.sort();
console.log(arr); // sort original array

//ascending sort:
let compare1 = (a,b)=>{
    return a - b;
}
arr.sort(compare1);
console.log(arr);

//descending sort:
let compare2 = (a,b)=>{
    return b - a;
}
arr.sort(compare2);
console.log(arr);

let arr1 = ["Dhiraj","Dinesh","Harsh","Aaryan"];
arr1.reverse();
console.log(arr1);

//Splice
let n = [1,2,3,4,5,6,7,8];
let deletedValues = n.splice(2,3,1011,1012,1013,1014,1015); 
console.log(n);
console.log(deletedValues); //returns deleted values

//Slice
let newArray1 = n.slice(2);
console.log(newArray1);
let newArray2 = n.slice(2,5);
console.log(newArray2);