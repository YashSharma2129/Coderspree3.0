

import java.util.*;
public class For_loop {
	static int fib(int n)
    {
        if (n==0)
            return 0;
      else if(n==1 || n==2)
            return 1;
        return fib(n - 1) + fib(n - 2);
    }


	public static void main(String[] args) {
		 Scanner sc=new Scanner(System.in);
		 int n=sc.nextInt();
        System.out.println(fib(n));
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/

		
	}

}