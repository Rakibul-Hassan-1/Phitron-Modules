function handleDiposite() {
  var inputValue = document.getElementById("deposite-input").value;
  //   console.log("test");
  var depostieAmount = document.getElementById("deposite-amount").innerText;
  var sum = parseFloat(inputValue) + parseFloat(depostieAmount);
  //   console.log(sum);
  document.getElementById("deposite-amount").innerText = sum;
  // amount deposite korar pore abr inout box khali korar jonno use kora hoise NULL
  document.getElementById("deposite-input").value = "";

  //total amount niye kaj kam
  var totalAmount = document.getElementById("total-amount").innerText;
  var convertToFloat_totalAmount = parseFloat(totalAmount);

  var totalSum = parseFloat(inputValue) + convertToFloat_totalAmount;
  //printing the totalSum into total amount
  document.getElementById("total-amount").innerText = totalSum;
}

function handleWithdraw() {
  //   console.log("test");
  var inputValue = document.getElementById("withdraw-input").value;
  var withdrawAmount = document.getElementById("withdraw-amount").innerText;
  var sub = parseFloat(inputValue);
  document.getElementById("withdraw-amount").innerText = sub;
  document.getElementById("withdraw-input").value = "";

  //total amount niye kaj kam
  var totalAmount = document.getElementById("total-amount").innerText;
  var convertToFloat_totalAmount = parseFloat(totalAmount);
  var afterWithdrawAmount = convertToFloat_totalAmount - parseFloat(inputValue);
  document.getElementById("total-amount").innerText = afterWithdrawAmount;
}
