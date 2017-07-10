import java.util.Scanner;

public class Days {

	public static void main(String[] args) {
		
		// TODO Auto-generated method stub
		Scanner s=new Scanner(System.in);
		String str=s.nextLine();
		if(str=="monday"||str=="tuesday"||str=="wednesday"||str=="thursday"||str=="friday")
		{
			System.out.println("true");
		}
		else
		{
			System.out.println("false");
		}
	}

}
