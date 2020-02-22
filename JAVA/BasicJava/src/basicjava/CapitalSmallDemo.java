
package basicjava;
import java.util.Scanner;

public class CapitalSmallDemo 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        char ch;
        ch=input.nextLine().charAt(0);
        
        if(ch>='a' && ch<='z')
            System.out.println("Small letter");
        else if(ch>='A' && ch<='Z')
            System.out.println("Capital letter");
        else
            System.out.println("This is not Alphabet");
        
    }
}
