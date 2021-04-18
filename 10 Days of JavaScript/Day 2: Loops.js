'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    let vowels = "";
    let consonants = "";
    for (let index = 0; index < s.length; ++index) {
        switch (s[index]) {
            case "a":
            case "A":
            case "e":
            case "E":
            case "i":
            case "I":
            case "o":
            case "O":
            case "u":
            case "U":
                vowels = vowels + s[index];
                break;
            default:
                consonants = consonants + s[index];
                break;
        }
    }
    
    for (let index = 0; index < vowels.length; ++index) {
        console.log(vowels[index]);
    }
    
    for (let index = 0; index < consonants.length; ++index) {
        console.log(consonants[index]);
    }
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}
