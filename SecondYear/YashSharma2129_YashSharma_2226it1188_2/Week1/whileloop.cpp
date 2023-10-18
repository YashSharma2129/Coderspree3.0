#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, even = 0, odd = 0;
    while (n != 0) {
        a = n % 10;
        if (a % 2 == 0) {
            even += a;
        } else {
            odd += a;
        }
        n = n / 10;
    }
    cout << "Sum of even digits: " << even << endl;
    cout << "Sum of odd digits: " << odd << endl;
    return 0;
}
