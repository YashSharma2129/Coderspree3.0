#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int sum=0;
	int sum1=0;
	int r;
	while(n!=0){
		r=n%10;
		if(r%2==0){
			sum=sum+r;
		}else{
			sum1=sum1+r;
		}
		n/=10;
	}
	cout<<sum<<" "<<sum1;
}