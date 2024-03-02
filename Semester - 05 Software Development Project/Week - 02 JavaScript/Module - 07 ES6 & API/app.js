// Dynamic String
let dynamicStr = `
Hello I am Rakibul Hassan. I am from
Bangladesh
`;

console.log(dynamicStr);

//Spread Operator
let arr = [
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
];

// ... is a spread operator jeta brackt chara prottekta element show kore/ ber kore ane
console.log(...arr);
// maximum element in array ber korar jonno amader first a elements gula ber kore ante hobe age
console.log(Math.max(...arr));

//copy element to another array using Spread operator

let copyArray = [...arr, ...arr];
console.log(...copyArray);

//string copy using Template String
let str = "world";
console.log(`Hello ${str}`);
