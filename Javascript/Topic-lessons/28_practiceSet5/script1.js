//Q1, Q2 and Q3:
let runAgain = true;

const canDrive = (age) => {
    return age > 18 ? true : false;
}

while (runAgain) {
    let age = prompt("Enter your age: ");
    age = Number.parseInt(age);
    if(age<0 || age==0)
    {
        console.error("Please Enter Valid AGE!!");
        break;
    }

    if (canDrive(age)) {
        alert("Yes, you can drive!");
    }
    else {
        alert("No, you cannot drive!");
    }
    runAgain = confirm("Do you want to play again?");
}
