// Prompt user for the size of the board
// I guess this is the way libraries/modules work in Javascript?
const readline = require('readline');

// Adding functionality to readline createInterface object
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// The first parameter to the question method is the string and then the
// second parameter is an entire function that uses the input as a parameter
rl.question("Please enter the size of the chessboard: ", (answer) => {
    var size = answer;
    chessboard(size);
    rl.close();
});

// You must compartmentalize if you want input in javascript
const chessboard = (size) =>{
    for(let i = 0; i < size; ++i){
        // If i is divisible by 8 then switch patterns
        let flip = false;
        // Setting up empty string to concatenate to
        let string = "";
        if(!(i % 2)){
            flip = !flip;
        }
        for(let j = 0; j < size; ++j){
            if(flip){
                // Print # if odd and space otherwise
                // If even
                if(j % 2){
                    string = string.concat(" ");
                    continue;
                }
                string = string.concat("#");
                continue;
            }
            if(!(j % 2)){
                string = string.concat(" ");
                continue;
            }
            string = string.concat("#");
        }
        console.log(string);
    }
};
