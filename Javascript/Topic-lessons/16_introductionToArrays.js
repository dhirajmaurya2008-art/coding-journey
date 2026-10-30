let arr = [23,45,27,23,64,"HelloWorld",false];
console.log(arr);
console.log(arr[0]);
console.log(arr[1]);
console.log(arr[2]);
console.log(arr[3]);
console.log(arr[4]);
console.log(arr[5]);
console.log(arr[6]);
// console.log(arr[7]); gives undefined
console.log("The length of array arr is: ",arr.length);

//Adding array element
arr[8] = 1000;
console.log(arr);

//Changing existing array value using its index position
arr[0] = 99;
console.log(arr[0]);

console.log(typeof arr);

for(let i = 0; i < 9; i++)
{
    console.log(arr[i]);
}