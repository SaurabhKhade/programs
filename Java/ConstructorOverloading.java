public class ConstructorOverloading{
    ConstructorOverloading(){
        System.out.println("Constructor with no args");
    }
    ConstructorOverloading(int one){
        System.out.println("Constructor with one int arg");
    }
    ConstructorOverloading(char a, double b){
        System.out.println("Constructor with one character and one double args");
    }
    public static void main(String args[]){
        ConstructorOverloading obj= new ConstructorOverloading();
        ConstructorOverloading obj2= new ConstructorOverloading(44);
        ConstructorOverloading obj3= new ConstructorOverloading('S',54.24);
    }
}