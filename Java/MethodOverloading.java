public class MethodOverloading{
    public int add(int a, int b){
        return a+b;
    }
    public int add(int a, int b, int c){
        return a+b+c;
    }
    public int add(int a, int b, int c, int d){
        return a+b+c+d;
    }
    public static void main(String []args){
        MethodOverloading obj= new MethodOverloading();
        System.out.println("ADD with 2 args (5 and 7)= "+obj.add(5,7));
        System.out.println("ADD with 3 args (20, 15 and 2)= "+obj.add(20,15,2));
        System.out.println("ADD with 4 args (12, 34, 10 and 5)= "+obj.add(12,34,10,5));
    }
}