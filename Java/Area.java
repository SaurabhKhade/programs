public class Area{
    public int reactangle(int length, int breadth){
        return length*breadth;
    }
    public double triangle(int base, int height){
        return 0.5*base*height;
    }
    public static void main(String []args){
        Area obj= new Area();
        System.out.println("Area of Triangle with height=50 and base= 20 is "+ obj.triangle(20,50));
        System.out.println("Area of Rectangle with length=40 and breadth= 30 is "+ obj.reactangle(40,30));
    }
}