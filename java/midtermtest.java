import java.util.*;
class midterm{
    public static void mystery(ArrayList<Integer> list) {
        for (int index = 0; index < list.size(); index++) {
            int elementValue = list.remove(index);
            if (elementValue % 2 == 0) {
                list.add(index);
            }
        }
        System.out.println(list);
    }
    public static void main(String[] args){
        ArrayList<Integer> myList = new ArrayList<Integer>(){
            {
                add(3);
                add(5);
                add(8);
                add(9);
                add(2);
            }
        };
        mystery(myList);
    }
}
