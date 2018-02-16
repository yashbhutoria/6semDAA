/**
 * @author Yash_Bhutoria
*/
import java.util.Scanner;
import java.util.Arrays;
class KnapSack{

    public static int profit(double arr[][],int capacity){
        int profit = 0;
        int i=0;
        while( capacity > 0 ){
            double weightTaken = arr[i][1] < capacity ? arr[i][1] : capacity;
            profit += (int)(arr[i][2]*weightTaken); 
            capacity -= weightTaken;
            i++;
        }
        return profit;
    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.println("Enter Capacity: ");
        int capacity = in.nextInt();
        System.out.println("Enter Number of Items: ");
        int numberOfItems = in.nextInt();
        double table[][] = new double[numberOfItems][3];

        //index 0 = Price,  1 = Weight , 2 = Value
        System.out.println("Enter Price and Weight for all items :\n");
        for(int i=0;i<numberOfItems;i++){
            table[i][0] = in.nextInt();
            table[i][1] = in.nextInt();
            table[i][2] = table[i][0] / table[i][1]; 
        }
        
        // Sort on Item Values by passing Lambda Expression for comparison on second column
        Arrays.sort(table, (a, b) -> Double.compare(b[2], a[2]));
        
        //Calculating Maximum Profit
        System.out.println("Maximum Profit: "+profit(table,capacity));

    }
}