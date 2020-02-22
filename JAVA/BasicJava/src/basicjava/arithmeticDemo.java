package basicjava;
import java.util.Scanner;

public class arithmeticDemo 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
       // Scanner num12 = new Scanner(System.in);
        
        int num1,num2,result;
        
        num1 = input.nextInt();
        num2 = input.nextInt();
        
        result=num1+num2;
        System.out.println("Result = "+result);
        
        result=num1-num2;
        System.out.println("Result = "+result);
        
        result=num1*num2;
        System.out.println("Result = "+result);
        
        double resultt= (double)num1/num2;
        System.out.printf("Result = %.4f\n",resultt);
        
        resultt= (double)num1%num2;
        System.out.printf("Result = %.4f\n",resultt);
    }
}
