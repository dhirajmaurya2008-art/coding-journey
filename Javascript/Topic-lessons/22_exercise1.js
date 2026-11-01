//Exercise 1: Guess the number
// let number = 0; //Generate from random number here math.random
let chance = 0;
//Keep asking the number until the correct number is guessed
//Increment the chances variable

//Eventually game is over, display the (100-Number of chances) and the actual number 
const randomNumber = Math.floor(Math.random() * 100) + 1;
// console.log(randomNumber);

let num;
do {
    num = prompt("Guess number: ");
    num = Number.parseInt(num);
    chance++;
    if (num > randomNumber) {
        console.log("Guessed number is greater then randomNumber.");
    }
    else if (num < randomNumber) {
        console.log("Guessed number is less than random number.");
    }
} while (num != randomNumber);
console.log("Congratulation you guessed the random number.");

console.log("(100-Number of chances): ", (100 - chance) ,".");
console.log("The random number is: ", randomNumber);