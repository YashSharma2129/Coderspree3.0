import java.util.*;
public class Main {
	
	public static void main(String[] args) {
		// Write your code here
		Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
		int c=(int)(Math.log10(n) + 1);
		int m=n;
		int sum=0;
        while(m!=0){
			sum=sum+(int)Math.pow((m%10),c);
			m/=10;
		} 
		if(sum==n)
		  System.out.println("true");
		else
          System.out.println("false"); 
	}
}
