class incrementDecrementBehavior{
     public static void main(String[] args){
        int[] myNums = {1, 2, 3, 4, 5};
        int a = 0;
        System.out.println("Here is the list of integers\n");
        for(int i = 0; i < myNums.length; ++i){
            std::cout << myNums[i] << " ";
        }
        std::cout << "\n";
        std::cout << "Here is the number that is returned with ++a: ";
        std::cout << myNums[++a] << "\n";
        a--;
        std::cout << "Here is the number that is returned with a++: ";
        std::cout << myNums[a++] << "\n";
        return 0;
    }
}
