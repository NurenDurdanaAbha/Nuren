
package basicjava;
import java.util.Scanner;

public class selectionStatement 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        
        if(number>0)
            System.out.println("Positive");
        else
            System.out.println("Negative");
    }
}
