// Java always passes by copy, never by reference
class returnValues{
    public static int testFunction(int x){
        x = x + 1;
        return;
    }
    public static void main(String[] args){
        int x = 10;
        testFunction(x);
        System.out.println("Here is x: ");
        System.out.println(x);
        return;
    }
}
