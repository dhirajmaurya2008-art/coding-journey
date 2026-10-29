//Q1:
console.log("ton\"".length);

//Q2:
const sentence = "Hannibal is a serial killer";
const word = "Hannibal";
console.log(sentence.includes(word));
console.log(`The word "${word}" ${sentence.includes(word) ? 'is' : ' is not '} in the sentence`);

const message = "Hello, welcome to the world of JavaScript!";
console.log(message.startsWith("Hello"));   // true
console.log(message.startsWith("hello"));   // false (due to case sensitivity)
console.log(message.startsWith("welcome")); // false (does not start at index 0)

const text = "Hello world!";
console.log(text.endsWith("world!")); // true
console.log(text.endsWith("world"));  // false (missing the exclamation mark)

//Q3:
let n = "MODIJI";
console.log(n.toLowerCase());

//Q4:
let str = "Please give my Rs 1000";
let amount = str.slice(18);
// let amount = str.slice("Please give my Rs ".length);
console.log(amount);

//Q5:
let friend = "Harsh";
friend[4] = "d";
console.log(friend); //string cannot change, because it is immutable.