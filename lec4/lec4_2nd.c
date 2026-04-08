#include <stdio.h>

void countdown(int x);
int main() {
countdown(15);
printf("----\n");
countdown(4);
return 0;
}
void countdown(int x) {

    if(x<0){
    printf("Negative number\n");
    return;
    }

    for(int i = x; i >= 0; i--){
        printf("%d\n", i);
    }
}