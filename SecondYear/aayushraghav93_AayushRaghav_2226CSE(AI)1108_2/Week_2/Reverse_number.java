
public class Reverse_number
 {
	public static long reverseBits(long n) {
		// Write your code here
		long reversed = 0;
        int numberOfBits = 32;  

        for (int i = 0; i < numberOfBits; i++) {
    reversed = (reversed << 1) | (n & 1);
            n = n >> 1;
        }

        return reversed;

	}
}
