#include<stdio.h>
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int array_size = sizeof(array) / sizeof(array[0]); 
    int sum = 0;

    
    for (int i = 0; i < array_size; i++) {
        sum += array[i];
    }

    
    printf("Sum of array elements: %d\n", sum);

    return 0;
}