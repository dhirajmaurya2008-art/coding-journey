//Array Map Method
let arr = [2,3,5,7,33,54];
// console.log(arr);
let a = arr.map((value, index, array)=>{  //to make new array, does not change original array
     console.log(value, index, array);
     return value + index;
});
console.log(a);

//Array Filter Method
let arr2 = [1,2,3,45,64,6,7];  
let a2 = arr2.filter((a)=>{     //to display filter array, does not change original array
    return a < 10;
});
console.log(a2);

//Array Reduce Method
let arr3 = [1,2,3,4,3,2,1];
let newarray = arr3.reduce((x1, x2)=>{  //reduces a array to single value, does not change original array
    return x1 + x2;
});
console.log(newarray);
