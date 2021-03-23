class Person{
    String name;
    int age;
    Person(String name, int age){
        this.name= name;
        this.age= age;
    }
    void display(){
        System.out.println("I am a Person my details are");
        System.out.println("Name: "+name);
        System.out.println("Age: "+age+"\n");
    }
}

class Student extends Person{
    String branch;
    int marks;
    Student(String name, int age, String branch, int marks){
        super(name,age);
        this.branch= branch;
        this.marks= marks;
    }
    void display(){
        System.out.println("I am a Student my details are");
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Branch: "+branch);
        System.out.println("Marks: "+marks+"\n");
    }
}

class Representative extends Student {
    String post;
    Representative(String post,String name, int age, String branch, int marks){
        super(name,age,branch,marks);
        this.post= post;
    }
    void display(){
        System.out.println("I am a representative my details are");
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Branch: "+branch);
        System.out.println("Marks: "+marks);
        System.out.println("Post: "+post+"\n");
    }
}

public class MultilevelInheritance{
    public static void main(String []args){
        System.out.println("Object of Person Class");
        Person ram= new Person("Ram",22);
        ram.display();
        System.out.println("Object of Student Class");
        Student shyam= new Student("Shyam",20,"CSE",90);
        shyam.display();
        System.out.println("Object of Representative Class");
        Representative ramdev= new Representative("Class Representative","Ramdev",24,"Mech",95);
        ramdev.display();                
    }
}