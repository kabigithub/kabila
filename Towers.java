import java.util.Scanner;
import java.util.Stack;

public class TowersOfHanoiThreeDiskEx {
	 public static Stack<Integer>[] tower = new Stack[4]; 
	 
	

   public void DiskEx(int n, int p1, int p2, int p3) {
       if (n == 1) {
           System.out.println(p1 + " -> " + p3);
       } else {
           DiskEx(n - 1, p1, p3, p2);
           int d = tower[p1].pop();                                             
           tower[p3].push(d);
           System.out.println(p1 + " -> " + p3);
           DiskEx(n - 1, p2, p1, p3);
       }
   }

   public static void main(String[] args) {
       TowersOfHanoiThreeDiskEx towersOfHanoi = new TowersOfHanoiThreeDiskEx();
       tower[1] = new Stack<Integer>();
       tower[2] = new Stack<Integer>();
       tower[3] = new Stack<Integer>();
       for(int i=3;i>0;i--){
    	   tower[1].push(i);
       }
     new  TowersOfHanoiThreeDiskEx().DiskEx(3, 1, 2, 3);
     
   }
}