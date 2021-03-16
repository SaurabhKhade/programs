public class Constructor {
	public static void main(String[] args) {
		Person p1= new Person();
		Person p2= new Person();
		p1.age=24; p1.name="Shrihari";
		p2.age=42; p2.name="hari";
		p1.walk();
		p2.walk(5);
		p1.eat();
	}
}

class Person{
    int age;
    String name;
    Person(){
        System.out.println("creating an object");
    }
    void eat(){
        System.out.println(name+" is eating");
    }
    void walk(){
        System.out.println(name+" is walking");
    }
    void walk(int steps){
        System.out.println(name+" is walked "+steps+" stepa");
    }
}