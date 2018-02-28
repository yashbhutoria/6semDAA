import java.util.HashMap;
import java.util.Scanner;

/*
 This is a O(1) code;
*/


public class ExactSumX {

    public static int comp(int n,int sum){
        return sum - n;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the sum you want to find");
        int sum = in.nextInt();
        System.out.println("Enter the number of elements");
        int n = in.nextInt();
        HashMap<Integer, Integer> myMap = new HashMap<Integer, Integer>();
        boolean ans = false;
        System.out.println("Enter the array:");
        for (int i = 0; i < n; i++) {
            int input = in.nextInt();
            if(myMap.containsKey(comp(input,sum))){
                ans = true;
                break;
            } else if(myMap.containsKey(input)){
                myMap.replace(input, myMap.get(input)+1);
            } else {
                myMap.put(input,1);
            }
        }

        System.out.println(ans);
        
    }
}