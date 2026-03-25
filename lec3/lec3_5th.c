#include <stdio.h>

int main() {

    int a = 10;
    float b = 3.14;
    char c = 'h';
    if('a'<'b'){
        printf("b(%c-%d) is bigger than a(%c-%d)\n", 'b', 'b', 'a', 'a');
    }

    printf("before c: %c\n", c);
    if('a' <= c && c <= 'z'){
        c = c - 'a' +'A';
    }
    printf("after c: %c\n", c);

    return 0;
}