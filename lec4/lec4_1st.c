#include <stdio.h>


double get_average(double left, double right);
int main() {

double avg_result = get_average(8,2.2);
printf("Average: %f\n", avg_result);
return 0;
}

double get_average(double left, double right){
    return (left + right) / 2.0;
}