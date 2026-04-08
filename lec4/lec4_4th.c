#include <stdio.h>

int isPrime(int number);
int main() {
int number = 871329487;
if (isPrime(number)) {
printf("%d is a prime number.\n", number);
} 
else {

printf("%d is not a prime number.\n", number);
}
return 0;
}

int isPrime(int number) {

    if(number<=1) {
        return 0;
    }
    for (int i = 2; i <= number/2; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}