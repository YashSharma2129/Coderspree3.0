#include <iostream>

int fibo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else {
        int a = 0;
        int b = 1;
        for (int i = 2; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int a;
    std::cin >> a;
    int result = fibo(a);
    std::cout << result << std::endl;
    return 0;
}
