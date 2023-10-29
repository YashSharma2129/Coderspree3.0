#include<bits/stdc++.h>
bool checkArmstrong(int n){
	//Write your code here
	int original,sum=0,count=0;
	original=n;
	while(original>0)
	{
		
		count++;
		original=original/10;
	}
	original=n;
	while(original>0)
	{
		int digit = original %10;
		sum=sum+pow(digit,count);
		original=original/10;

	}
	if(sum==n) return true;
	else return false;

}
