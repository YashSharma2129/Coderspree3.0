#include<iostream>
using namespace std;

int main() {
       char a;
	//    cout << "Enter a character: ";
       cin >> a;

    int result = isalpha(a) ? (isupper(a) ? 1 : 0) : -1;

    cout << result <<endl;

    return 0;
	// Write your code here
	
}
