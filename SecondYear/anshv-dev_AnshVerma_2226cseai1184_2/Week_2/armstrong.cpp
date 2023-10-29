int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool checkArmstrong(int n){
	//Write your code here
	int originalNum = n;
    int c = countDigits(n);
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, c);
        n /= 10;
    }
    
    return sum == originalNum;
}