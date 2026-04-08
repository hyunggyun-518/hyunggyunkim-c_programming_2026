#include <stdio.h>
int sumOfArray1(int arr[], int arr_size);
int sumOfArray2(int arr[]);
int main() {
int arr[5] = { 1, 3, 9, 2, 7 };
int size = 5;
printf("Sum of array using sumOfArray1 is: %d\n", sumOfArray1(arr, size));
printf("Sum of array using sumOfArray2 is: %d\n", sumOfArray2(arr));
return 0;
}
int sumOfArray1(int arr[], int arr_size) {
int sum = 0;
for (int i = 0; i < arr_size; i++) {
sum += arr[i];
}
return sum;
}
int sumOfArray2(int arr[]) {
int sum = 0;
for (int i = 0; i < 5; i++) {
sum += arr[i];
}
return sum;
}