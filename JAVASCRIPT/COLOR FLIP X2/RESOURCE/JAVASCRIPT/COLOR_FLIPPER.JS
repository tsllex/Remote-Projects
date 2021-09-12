const btn = document.getElementById("btn")
const color01 = document.getElementById("color01")
const color02 = document.getElementById("color02")
const box01 = document.getElementById("box01")
const box02 = document.getElementById("box02")

const numbers = "0123456789";
const alphabets = "abcdef";

function getRandomNumber() {
  return numbers[Math.floor(Math.random() * numbers.length)]
}

function getRandomAlphabet() {
  return alphabets[Math.floor(Math.random() * alphabets.length)]
}

function getRandom() {
  let arr = [];
  arr.push(getRandomNumber());
  arr.push(getRandomAlphabet());
  return arr[Math.floor(Math.random() * arr.length)]
}

btn.addEventListener("click", () => {
  let hex01 = "#";
  for(let i=0; i<6; i++) {
    hex01 += getRandom()
  }

  let hex02 = "#";
  for(let i=0; i<6; i++) {
    hex02 += getRandom()
  }

box01.style.backgroundColor = hex01;
box02.style.backgroundColor = hex02;
color01.textContent = hex01;
color02.textContent = hex02;

}
);
