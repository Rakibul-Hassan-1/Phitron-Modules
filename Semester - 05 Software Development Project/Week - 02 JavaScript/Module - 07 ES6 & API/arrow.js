// normal funtion
function test() {
  console.log("Hello world!");
}
const result = test();
console.log(result);

// using arrow function, Returning single line arrow function
const singleLineFunc = () => 2 * 2;
console.log(singleLineFunc());

// Returning multiple lines arrow function
const multipleLineFunc = () => {
  console.log("This is multiple lines arrow function");
  return "1";
};
console.log(multipleLineFunc());
