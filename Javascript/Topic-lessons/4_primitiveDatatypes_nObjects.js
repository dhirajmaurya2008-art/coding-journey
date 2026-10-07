// (nn bb ss u) --> Primitive Datatype
let a = null;
let b = 345;
let c = true; //can also be false
let d = BigInt("567") + BigInt("3");
let e = "Harry";
let f = Symbol("I am a nice symbol");
let g = undefined;
console.log(a, b, c, d, e, f, g);

//To find which type of data is:
console.log(typeof a, typeof b, typeof c, typeof d, typeof e, typeof f, typeof g);

// Objects in Js
const item = {
    "Rahul": true,
    "Manny": false,
    "Sheldon": 67,
    "Rohan": undefined
}
console.log(item["Rahul"]);
console.log(item["Manny"]);
console.log(item["Sheldon"]);
console.log(item["Rohan"]);
console.log(item["Dinesh"]); // gives undefined because its not present in object



