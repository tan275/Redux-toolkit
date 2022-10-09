import java.util.*;
public class isOdd {
   boolean isOdd(int n) {
	   while(n>1)
		   n-=2;
	   if(n==1)
		   return true;
	   else
		   return false;
   }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number");
		int N=sc.nextInt();
		isOdd input=new isOdd();
		System.out.println(input.isOdd(N));
	}

}
