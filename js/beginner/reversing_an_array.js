const main = () =>{

    let array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

    console.log("Here it is forwards:");
    for(let i = 0; i < array.length; ++i){
        process.stdout.write(array[i].toString());
        process.stdout.write(" ");
    }
    process.stdout.write("\n");

    // array.length-(i+1) is used because we cannot index 10 and i starts
    // at 0
    for(let i = 0; i < (array.length/2); ++i){
        [array[i], array[array.length-(i+1)]] = [array[array.length - (i+1)], array[i]];
    }

    console.log("Here it is reversed");

    for(let i = 0; i < array.length; ++i){
        process.stdout.write(array[i].toString());
        process.stdout.write(" ");
    }
}
main();
