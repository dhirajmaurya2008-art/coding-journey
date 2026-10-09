//Q1:
let a = "Dinesh";
let b = 6;
console.log(a + b); //Gets concatenate

//Q2:
console.log(typeof a);
console.log(typeof b);

//Q3:
const c = {
    name: "Harsh",
    section: 1,
    isPrinciple: false
}
// c = 54; //gives error --> cannot change to hold number later.

//Q4:
c['friend'] = "Shubham";
c['name'] = "Rathod";
console.log(c);

//Q5:
const dict = {
    Resilient: "Able to recover quickly from difficulties",
    Diligent: "Showing careful and consistent effort in work",
    Innovative: "Introducing new ideas or creative methods",
    Ambitious: "Having a strong desire to achieve success",
    Persistent: "Continuing to work despite difficulties"
}
console.log(dict);
console.log(dict.Ambitious);
console.log(dict['Ambitious']);