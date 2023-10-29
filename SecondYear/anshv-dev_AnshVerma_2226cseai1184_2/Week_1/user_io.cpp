#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ch;
	cin>>ch;
	if('A'<=ch && ch<='Z'){
		cout<<1;
	}else if('a'<=ch && ch<='z'){
		cout<<0;
	}else{
		cout<<-1;
	}
	
}