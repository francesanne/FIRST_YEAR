// alert('Hello World');
console.log('Hello World');
console.error('This is an error');
console.warn('This is a warning');


//var, let, const 
// var - globally scoped

//let - u can reassign values
let ages = 30;
ages=31;
console.log(ages);
//const - always use const unless u will reassign values to make 
//your code more secure & more robust


//datatypes (primitive: strings, numbers, boolean, null, undefined,symbol)
const name = 'John';
const age = 30;
const rating = 4.5;
const isCoool = true; //boolean - true/false
const x = null;
const y = undefined;
let z; //other way of using undefined

console.log(typeof age); //typeof will display what type of datatype your variable is

//concatenation
console.log('My name is '+name+' and I am ' + age);
// Template String
const hello = `My name is ${name} and I am ${age}`;
console.log(hello);


const s = 'Hello World!';
console.log(s.length)  // to get the length of the string
console.log(s.toUpperCase());
console.log(s.toLowerCase());
console.log(s.substring(0,5). toUpperCase()); //(0,5) are indeces, where u will start and end your string
console.log(s.split(''));

const str1 =  'technology, IT, code'
console.log(str1.split(', ')); //this is handy

//ARRAYS
const numbers = new Array (1,2,3,4,5); //"new" is a constructor, used in string
console.log(numbers);
//easy way
const fruitss = ['apples', 'oranges', 'pears', 10, true]; //can mix datatypes
console.log(fruitss);
//accessing one element in an array
console.log(fruitss[0]);
//adding another element in an array
fruitss[5] = 'grapes';
console.log(fruitss);

const fruits = ['apples', 'oranges', 'pears'];
//push method to add elements in an array at the end
fruits.push('mangoes'); 
console.log(fruits);
//unshift method to add elements in an array at the beginning
fruits.unshift('banana'); 
console.log(fruits);
//to take the last one off
fruits.pop();
console.log(fruits);
console.log(Array.isArray('fruits'));//true
console.log(Array.isArray('hello')); //false


//OBJECT LITERALS

const person = {
    firstName: 'John',
    lastName: 'Doe',
    age: 30,
    hobbies: ['music', 'movies', 'sports'], //[]array
    address: {
        street: '50 main st',
        city: 'Boston',
        state: 'MA'
    }
}
console.log(person);
console.log(person.firstName, person.lastName);
console.log(person.hobbies[1]);
console.log(person.address.city);

//creating variables
const {firstName, lastName, address:{city}} = person; //not assigning something, but pulling those in {} out of the peson object
console.log(firstName);
console.log(city);

//adding properties
person.email = 'francesanne.riconalla@gmail.com';
console.log(person);

//arrays of objects
const todos = [
{  
    id: 1,
    text: 'Take out trash',
    isCompleted: true
},
{  
    id: 2,
    text: 'Meeting with boss',
    isCompleted: true
},

{  
    id: 3,
    text: 'Dentist appt',
    isCompleted: false
}
]
console.log(todos[1].text);

//JSON FORMAT - a data format, used a lot within full stack development using APIs when sending data to a server
//similar to object literals just use double quotes around the keys and the strings

const todoJSON = JSON.stringify(todos);
console.log(todoJSON);


//FOR LOOPS
for (let i=0; i<10; i++){
    console.log(`For Loop Number: ${i}`);  //``, ${}
}

//WHILE LOOP

let i=0;
while(i<10){
    console.log(`For Loop Number: ${i}`);  //``, ${}
    i++;
}


//loop through arrays
for(let i=0;i<todos.length;i++){  //".length" will give the numbers in an array
    console.log(todos[i].text);
}

for(let todo of todos) { //todo=could be anything, todos=name of the array
    console.log(todo);
}
for(let todo of todos) { //todo=could be anything, todos=name of the array
    console.log(todo.text);
}

//high order array methods 
//FOR EACH - loops thru them, MAP - allows to create a new array from an array
//FILTER - allows to create an array base on a condition
todos.forEach(function(todo){
    console.log(todo.text);
});
const todoText = todos.map(function(todo){ //loop through and return an array just the text
    return todo.text;
});

console.log(todoText);  //just a regular array

const todoCompleted = todos.filter(function(todo){ 
    return  todo.isCompleted === true;//return todo with true
});
console.log(todoCompleted); 



