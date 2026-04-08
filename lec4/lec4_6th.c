#include <stdio.h>

int factorial_recursive(int number);
int main() {
printf("Factorial of 4 is %d.\n", factorial_recursive(4));
return 0;
}

int factorial_recursive(int number) {
if (number <= 1) {
return 1;
}
else {
}
return number * factorial_recursive(number - 1);
}