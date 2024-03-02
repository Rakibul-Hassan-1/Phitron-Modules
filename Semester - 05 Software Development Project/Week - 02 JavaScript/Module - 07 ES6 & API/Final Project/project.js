const loadData = (global) => {
  const searchText = document.getElementById("search-box").value;
  //  Using templete string to modifiy the search text
  fetch(
    `https://www.themealdb.com/api/json/v1/1/search.php?f=${
      searchText ? searchText : global
    }`
  )
    .then((res) => res.json())
    .then((data) => displayData(data.meals));
};

function displayData(data) {
  console.log(data);
  const totalItems = (document.getElementById("total-items").innerText =
    data.length);
  const mealContainer = document.getElementById("meal-container");

  data.forEach((meal) => {
    // console.log(meal);
    const card = document.createElement("div");
    card.classList.add("box");
    card.innerHTML = `
        <img class="meal-img" src="${meal.strMealThumb}" alt=" ">
        <h2>${meal?.strMeal}</h2>
        <p>${meal.strInstructions.slice(0, 50)}</p>
        <button onclick="displayModal('${meal.idMeal}')"
        type="button"
        class="btn btn-primary"
        data-bs-toggle="modal"
        data-bs-target="#exampleModal"
      >
        Details
      </button>
        `;
    mealContainer.appendChild(card);
  });
}

const displayModal = async (id) => {
  //   console.log("", id);
  try {
    const response = await fetch(
      `https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`
    );
    const data = await response.json();
    // console.log(data.meals[0]);
    const mealTitle = (document.getElementById("meal-title").innerText =
      data.meals[0].strMeal);
    const mealInfo = (document.getElementById("meal-info").innerText =
      data.meals[0].strInstructions);
    console.log(mealTitle);
    console.log(mealInfo);
  } catch {
    const err = () => {
      console.log(err);
    };
  }
};

loadData("a");
