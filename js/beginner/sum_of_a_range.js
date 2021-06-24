
const range_func = (start, finish) => {
    let range_list = [];
    for (let i = start; i < finish; ++i){
        range_list.push(i);
    }
    return range_list;
}

const range_sum_func = (start,finish) => {
    let range_sum = 0;
    for(let i = start; i < finish; ++i){
        range_sum += i;
    }
    return range_sum;
}

const main = () =>{
    console.log("Here is the list of numbers:");
    consol.log(range_func(5,10));
    console.log("Here is the sum of all those numbers:");
    console.log(range_sum_func(5,10));
}

main();

