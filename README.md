```js
var int = Math.floor(Math.random() * 295147905179352825856)
function isOdd(num) { return num % 2;}
var newInt = int % 2
var startingNum = int



while(true) {
    var newInt = int % 2
    if(newInt === 0){
        var int = int / 2
    }
    if(newInt === 1) {
        var int = int * 3 + 1
    }
    if(int === 1) return console.log(`Finished! Started with ${startingNum}`)
    console.log(int)
}

//This is the Collatz Conjuncture, it is a question that has been unsolved since 1937.
//Does the Collatz sequence eventually reach 1 for all positive integer initial values? Maybe you will find out!
```
