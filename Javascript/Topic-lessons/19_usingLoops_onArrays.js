//For loop
let num = [1,2,3,4,5,6,7,8,9];
for(let i = 0; i < num.length; i++)
{
    console.log(num[i]);
}
console.log(" ");

//ForEach loop
num.forEach((element)=>{
    console.log(element*element);
})

//Array.from
let name = "Maximus Meridius";
let arr = Array.from(name);
console.log(arr);

//For of
for (let item of num) {
    console.log(item);
}

//For in
for (let i in num) {
    console.log(i);
}