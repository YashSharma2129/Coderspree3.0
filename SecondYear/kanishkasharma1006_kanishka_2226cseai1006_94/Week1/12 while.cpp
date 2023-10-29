
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long int n;
	cin>>n;
	long int sum1=0,sum2=0;
	while(n!=0)
	{
		int r=n%10;
		if(r%2==0)
		{
			sum1+=r;
		}
		else
		{
			sum2+=r;
		}
		n=n/10;
	}
	cout<<sum1<<" "<<sum2;
}