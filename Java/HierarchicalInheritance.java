import java.util.Scanner;

class Person{
	String name;
	int age;
	String dept;
	String mobileNumber;
	Scanner scanner= new Scanner(System.in);
}

class Student extends Person {
	int marks;
	int fee;
	Student() {
		System.out.println("creating object of student");
		System.out.print("Enter Name: ");
		name= scanner.next();
		System.out.print("Enter age: ");
		age= scanner.nextInt();
		System.out.print("Enter Department: ");
		dept= scanner.next();
		System.out.print("Enter Mobile Number: ");
		mobileNumber= scanner.next();
		System.out.print("Enter Marks: ");
		marks= scanner.nextInt();
		System.out.print("Enter fee: ");
		fee= scanner.nextInt();
	}
	void display(){
		System.out.println("\nShowing details for student");
		System.out.println("Name: "+name);
		System.out.println("Age: "+age);
		System.out.println("Department: "+dept);
		System.out.println("Mobile Number: "+mobileNumber);
		System.out.println("Marks: "+marks);
		System.out.println("Fee: "+fee+"\n");
	}
}

class Teacher extends Person {
	int salary;
	Teacher() {
		System.out.println("creating object of Teacher");
		System.out.print("Enter Name: ");
		name= scanner.next();
		System.out.print("Enter age: ");
		age= scanner.nextInt();
		System.out.print("Enter Department: ");
		dept= scanner.next();
		System.out.print("Enter Mobile Number: ");
		mobileNumber= scanner.next();
		System.out.print("Enter Salary: ");
		salary= scanner.nextInt();
	}
	void display(){
		System.out.println("\nShowing details for student");
		System.out.println("Name: "+name);
		System.out.println("Age: "+age);
		System.out.println("Department: "+dept);
		System.out.println("Mobile Number: "+mobileNumber);
		System.out.println("Salary: "+salary+"\n");
	}
}

public class HierarchicalInheritance {
	public static void main(String []args){
		Student mahesh= new Student();
		Teacher tejas= new Teacher();
		mahesh.display();
		tejas.display();
	}
}