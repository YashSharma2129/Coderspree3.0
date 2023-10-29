#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    bool prime = isPrime(number);

    if (prime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

bool isPrime(int number) {
    int count=0;
    if (number <= 1) {
        return false;
    }

    for(int i =1;i<=number;i++){
        if(number%i==0){
            count = count+1;
        }
        if(count>2){
            return false;
        }
    }

    return true;
}