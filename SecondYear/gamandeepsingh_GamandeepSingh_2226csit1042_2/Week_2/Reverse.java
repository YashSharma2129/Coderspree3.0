
public class Solution {
	public static long reverseBits(long n) {
		// Write your code here
		long[] b= new long[32];
		for(int i=31 ;i>=0;i--){
			b[i]=n%2;
			n/=2;
		}
		long sum=0;
		int c=0;
		for(int i=0 ;i<32;i++){
			sum+= b[i]*(Math.pow(2,i)); 
			
		}
		return sum;
	}
}
