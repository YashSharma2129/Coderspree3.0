#include<bits/stdc++.h>
bool checkArmstrong(int n){
	//Write your code here
	int rem,count = 0;
	int result = 0,originalnumber;
	originalnumber = n;
	while(originalnumber){
		originalnumber /= 10;
		count++;
	}
	originalnumber = n;
	while(originalnumber){
		rem = originalnumber%10;
		//power = pow(rem,count);
		result = pow(rem,count) + result;
		originalnumber = originalnumber/10;

	}
	if(result==n){
		return true;
	}
	else{
	return false;
	}
}
