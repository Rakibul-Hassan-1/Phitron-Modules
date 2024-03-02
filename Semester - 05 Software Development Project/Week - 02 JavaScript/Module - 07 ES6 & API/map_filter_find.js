// Map using
let arr = [2, 2, 3, 4, 5];

for (let i = 0; i < arr.length; i++) {
  arr[i] = arr[i] * arr[i];
}

const ans = arr.map((x) => x * x);
console.log(ans);

//Filter using
const productArray = [
  { id: 1, name: "Nokia", color: "red" },
  { id: 2, name: "iPhone Xr", color: "green" },
  { id: 3, name: "iPhone 12", color: "red" },
  { id: 4, name: "iPhone 13", color: "blue" },
];

const filter_product = productArray.filter((x) => x.color == "red");
console.log(filter_product);

// Find using
const find_product = productArray.find((x) => (x.id = 1));
console.log(find_product.name);
