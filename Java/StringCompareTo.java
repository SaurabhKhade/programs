public class StringCompareTo {
	public static void main(String[] args) {
	    String s1="Sachin",s2="Virat",s3="Sachin";
	    System.out.println("Comparison of Sachin and Virat is "+s1.compareTo(s2));
	    System.out.println("Comparison of Virat and Sachin is "+s2.compareTo(s1));
	    System.out.println("Comparison of Sachin and Sachin is "+s1.compareTo(s3));
	}
}