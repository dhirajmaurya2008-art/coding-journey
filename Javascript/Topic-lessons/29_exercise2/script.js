// Use javascript to create a game of snake, water, and gun. The game should ask you to enter SNAKE,WATER,GUN.
// The computer should be able to randomly generate SNAKE, WATER, GUN and declare win or loss using alert. 
// Use confirm and prompt wherever use.
const choices = ['WATER', 'GUN', 'SNAKE'];
const randomChar = choices[Math.floor(Math.random() * choices.length)];

// console.log(randomChar);
let chances = 0;

let run = true;
while(run){   
let mychoice = prompt("Enter (WATER, GUN, SNAKE): ");
if(mychoice == randomChar)
{
    alert("It is draw, your choice is same as randomChoice.");
}    
else if(mychoice == 'WATER' && randomChar == 'GUN')
{
    alert("You win, your choice is WATER against GUN.");
}
else if(mychoice == 'GUN' && randomChar == 'SNAKE')
{
    alert("You win, your choice is GUN against SNAKE.");
}
else if(mychoice == 'SNAKE' && randomChar == 'GUN')
{
    alert("You lose, your choice is SNAKE against GUN.");
}
else if(mychoice == 'GUN' && randomChar == 'WATER')
{
    alert("You lose, your choice is GUN against WATER.");
}
else if(mychoice == 'WATER' && randomChar == 'SNAKE')
{
    alert("You lose, your choice is WATER against SNAKE.");
}
else if(mychoice == 'SNAKE' && randomChar == 'WATER')
{
    alert("You win, your choice is SNAKE against WATER.");
}
else
{
    alert("Invalid Choice!!");
}    

run = confirm("Play again?");
}

alert("No.of chances you played is: ",chances);

