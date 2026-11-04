// console.log(console); all console methods

console.log("HELLO WORLD!");

console.error("error 101"); //outputs error in red

console.assert(5 > 54);
console.assert(555 > 34); // not printed as failed, because it is true

// console.clear(); clears whole console page

obj = {a : 22, b : 33, c : 44};
console.table(obj);

console.warn("WARNING"); //outputs warning in yellow

console.info("Learning Javascript");

console.time("h1");
console.timeEnd("h1");

console.time("forloop");
for(let i = 0; i < 3; i++)
{
    console.log(i);
}    
console.timeEnd("forloop");

