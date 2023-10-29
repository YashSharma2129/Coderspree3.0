#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,r,even=0,odd=0;
	cin >> n;
	//if(n%2==0)
	while(n!=0){
		r = n%10;
		n = n / 10;
                if (r % 2 == 0) {
                  even = even + r;
                }
                else if(r%2!=0){
                    odd = odd + r;
                }
            
        }
		cout << even <<"  " << odd <<  endl;
		return 0;
}
