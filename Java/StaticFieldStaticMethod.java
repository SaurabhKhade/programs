public class StaticFieldStaticMethod{
    static int count;
    static void incr(){
        count++;
    }
    static void incr(int n){
        count= count+n;
    }
    static void dcr(){
        count--;
    }
    static void dcr(int n){
        count= count-n;
    }
    public static void main(String []args){
        System.out.println(StaticFieldStaticMethod.count);
        StaticFieldStaticMethod.incr();
        System.out.println(StaticFieldStaticMethod.count);
        StaticFieldStaticMethod.incr(6);
        System.out.println(StaticFieldStaticMethod.count);
        StaticFieldStaticMethod.dcr();
        System.out.println(StaticFieldStaticMethod.count);
        StaticFieldStaticMethod.dcr(3);
        System.out.println(StaticFieldStaticMethod.count);
    }
}