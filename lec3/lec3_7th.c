#include <stdio.h>
#define N 3
int main() {
int a[N];
int a_size = sizeof(a)/sizeof(int);
printf("Size of array a: %d\n", a_size);
return 0;
}