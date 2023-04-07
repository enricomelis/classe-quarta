// let input = prompt("Enter a phrase: ");

let phrase = "Hi, my name is Enrico. My height is 180";
let words = phrase.split(/\W+/);
let lowerWords = words.map(word => word.toLowerCase());
console.log(lowerWords);

let counter = 0;
let wordCounter = {};

for (let i = 0; i < lowerWords.length; i++) {
    for (let j = 0; j<lowerWords.length; j++){
        if (lowerWords[i] == lowerWords[j]) {
            counter++;
        }
    }
    wordCounter[lowerWords[i]] = counter;
    counter = 0;
}
console.log(wordCounter);



