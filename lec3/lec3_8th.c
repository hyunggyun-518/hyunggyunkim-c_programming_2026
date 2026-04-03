#include <stdio.h>
#define N 3
int main() {

    float a[N];
    int sum = 0;
    for(int i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &a[i]);
        
        sum += a[i];
    }

    printf("Average: %.2f\n", sum / (float)N);
return 0;
}