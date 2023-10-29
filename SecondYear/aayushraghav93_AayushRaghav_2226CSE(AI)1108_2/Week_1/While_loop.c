

int main() {
    int num, digit, evenSum = 0, oddSum = 0;
	int arr[2];

    
    scanf("%d", &num);

    // Ensure the number is positive

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        num /= 10;
    }
arr[0]=evenSum;
arr[1]=oddSum;
    for(int i=0;i<2;i++)
	printf("%d ",arr[i]);

    return 0;
}