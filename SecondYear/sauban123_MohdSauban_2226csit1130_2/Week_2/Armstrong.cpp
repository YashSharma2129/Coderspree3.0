bool checkArmstrong(int n){
	//Write your code here
	int Num_digits = 0;
	int temp = n;
	while(temp>0){
		temp=temp << 1;
		Num_digits++;
	}
	temp = n;
	int new_num = 0;
	while(temp){
		int rem = temp % 10;
		new_num += pow(rem, Num_digits);
		temp /= 10;
	}
	return (new_num == n);
}
