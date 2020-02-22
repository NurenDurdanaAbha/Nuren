
package basicjava;
import java.util.Scanner;

public class InputDemo 
{
 public static void main(String[] args)
 {
     Scanner input = new Scanner(System.in);
     Scanner in = new Scanner(System.in);
     int number;
     String name;
     
     System.out.print("Enter number: ");
     number = input.nextInt();
     System.out.println(number);
     
     System.out.print("Enter name: ");
     name = in.nextLine();
     System.out.println(name);
 }
}
