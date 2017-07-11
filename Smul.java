package test;
import java.util.Scanner;


public class Player {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s=new Scanner(System.in);
		String s1=s.next();
		
		String s2=s.next();
		int x=Integer.parseInt(s1);
		int y=Integer.parseInt(s2);
		
		int mul=x*y;
	String z=String.valueOf(mul);
		System.out.println(z);
		
s.close();
	}

}
