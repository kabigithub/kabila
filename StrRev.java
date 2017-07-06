package test;
import java.util.Scanner;

public class ReverseStr {
	
	
		public static void main(String[] args) {
			// TODO Auto-generated method stub
			Scanner s=new Scanner(System.in);
			String str=s.nextLine();
			StringBuffer sb=new StringBuffer(str);
			sb.reverse();
			
				System.out.print(sb);
				}
		}
