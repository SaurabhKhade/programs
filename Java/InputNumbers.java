import java.util.Scanner;

public class InputNumbers{
    public static void main(String []args){
        Scanner scanner = new Scanner(System.in);
        int a,b;
        System.out.print("Enter first number:");
        a=scanner.nextInt();
        System.out.print("Enter Second number:");
        b=scanner.nextInt();
        System.out.println("Addition is "+(a+b));
        System.out.println("Subtraction  is "+(a-b));
        System.out.println("Multiplication is "+(a*b));
        System.out.println("Division is "+(a/b));
    }
}