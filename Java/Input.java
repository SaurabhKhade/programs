import java.util.Scanner;

public class Input{
    int id;
    String name;
    String fullName;
    Double percentage;
    public Input(int id, String name, String fullName, Double percentage){
        this.id= id;
        this.name= name;
        this.fullName= fullName;
        this.percentage= percentage;
    }
    public static void main(String []args){
        Scanner scanner= new Scanner(System.in);
        System.out.print("Enter your id: ");
        int id= scanner.nextInt();
        System.out.print("Enter your first name: ");
        String name= scanner.next();
        System.out.print("Enter your full name: ");
        String fullName= scanner.nextLine();
        System.out.print("Enter your percentage: ");
        double percentage= scanner.nextDouble();
        Input object= new Input(id,name,fullName,percentage);
        System.out.println("Your ID is "+object.id);
        System.out.println("Your name is "+object.name);
        System.out.println("Your fullname is "+object.fullName);
        System.out.println("Your percentages are "+object.percentage);
    }
}