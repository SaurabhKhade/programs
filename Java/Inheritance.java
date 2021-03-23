class Base{
    protected String baseClass= "This is base class";
    void baseFunc(){
        System.out.println(baseClass);
    }
}

class Derived extends Base{
    private String derivedClass= "This is derived class";
    void derivedFunc(){
        System.out.println(derivedClass);
        System.out.println("I can also access variable of class Base");
        System.out.println(baseClass);
        System.out.println("I can also call method of class Base");
        baseFunc();
    }
}

public class Inheritance{
    public static void main(String []args) {
        System.out.println("Base class object created");
        Base obj1= new Base();
        obj1.baseFunc();
        System.out.println("Derived class object created");
        Derived obj2= new Derived();
        obj2.derivedFunc();
    }
}