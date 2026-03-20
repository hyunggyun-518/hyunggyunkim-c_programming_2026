#include <stdio.h>

int main(){

    int var_floor = 3;
    int var_ho = 4;

    if(var_floor % 2 ==0 && var_ho % 2 == 0){
        printf("ev4\n");
    }
    else if(var_floor % 2 == 1 && var_ho % 2 == 0){
        printf("Either floor or ho is even\n");
    }
    else if(var_floor % 2 == 0 && var_ho % 2 == 1){
        printf("Either floor or ho is even\n");
    }
    else if(var_floor % 2 == 1 && var_ho % 2 == 1){
        printf("Both floor and ho are odd\n");
    }
    return 0;
}