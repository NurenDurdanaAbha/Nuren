package basicjava;
import java.util.Scanner;

public class VowelOrConsonant 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        char ch=input.nextLine().charAt(0);
        
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            System.out.println("Vowel");
        else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            System.out.println("Vowel");
        else
            System.out.println("Consonant");
    }
}
