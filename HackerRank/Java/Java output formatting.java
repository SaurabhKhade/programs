/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


﻿﻿import java.util.*;
import java.nio.*;
import java.io.*;
import java.text.*;
public class Main 
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		DecimalFormat ft=new DecimalFormat("000");
		int p=3;
		int width=32;
		String fill=new String(new char[width]).replace('\0','=');
		System.out.println(fill);
		while(p>0)
		{
			String str=input.next();
			int num=input.nextInt();
			String pad=new String(new char[15-str.length()]).replace('\0',' ');
			System.out.println(str+pad+ft.format(num));
			p--;
		}
		System.out.println(fill);
	}
}