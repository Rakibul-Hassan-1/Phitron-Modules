const productArray = [
  { id: 1, name: "Nokia", color: "red" },
  { id: 2, name: "iPhone Xr", color: "green" },
  { id: 3, name: "iPhone 12", color: "red" },
  { id: 4, name: "iPhone 13", color: "blue" },
];

const productContainer = document.getElementById("product-container");
const result = productArray.forEach((products) => {
  console.log(products);
  const h1 = document.createElement("h1");
  h1.innerText = products.name;
  productContainer.appendChild(h1);
});
