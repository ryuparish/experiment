const list_making_function = () => {
    let array = [1, 2, 3, 4];
    let list;
    for(let i = (array.length); i > 0; --i){
        list = {value: i,
            rest : list};
    }
    let i = -1;
    while(i != null){
        
        // If the list itself is null (in the inner core) then just set i to null and the while loop will terminate
        if(list != null){
            i = list.value;
        }
        else{i = list;}

        console.log(i);

        if(list != null){
            list = list.rest;
        }

    }
}


list_making_function();
