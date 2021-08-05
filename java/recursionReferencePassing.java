import java.util.*;
class recursion{
    public void recursiveFunction(ArrayList<Integer> myArrayList){
        if(myArrayList.size() > 4){
            myArrayList.remove(myArrayList.size() -1);
            return;
        }
        myArrayList.add(1);
        System.out.println("myArrayList before recursive call: " + myArrayList);
        recursiveFunction(myArrayList);
        System.out.println("myArrayList after recursive call: " + myArrayList);
    }

    public static void main(String[] args){
        recursion myRecursion = new recursion();
        ArrayList<Integer> myArrayList = new ArrayList<Integer>();
        myRecursion.recursiveFunction(myArrayList);
        return;
    }
}
        
        
