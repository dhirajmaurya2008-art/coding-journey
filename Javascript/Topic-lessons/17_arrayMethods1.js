let arr = [1 ,3, 6, 7, 3];
let b = arr.toString(); // b is now string
console.log(b);

let c = arr.join("-");
console.log(c);

let d = arr.pop();   //removes last element from array
console.log(arr);
console.log(d);   //returns popped element

let h = arr.push(999);  //adds new element at last of array
console.log(arr);
console.log(h);       //returns array length

let r = arr.shift();  //removes first element from array
console.log(arr);    
console.log(r);   //returns shifted element

let f = arr.unshift(87);  //adds new element at first from array
console.log(arr);    
console.log(f);   //returns array length