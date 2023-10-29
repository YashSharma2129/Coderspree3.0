public class Solution {
	public static String isPrime(int num) {
		//Your code goes here
		if(num<2)
		return "NO";
		if(num==2 || num==3) return "YES";
		if (num % 2 == 0 || num % 3 == 0) return "NO";

		for(int i=5;i*i<=num;i=i+6){
			if (num % i == 0 || num % (i + 2) == 0)
            return "NO";
		}
		return "YES";
	}
}