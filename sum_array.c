#include <stdio.h>

Tai Bradley
/*
This code provides a summation of everything in the numbers array.
*/
int main(void) {
    // Initialize array
    int numbers[] = {10, 20, 30, 40, 50};
    
    int array_size = sizeof(numbers) / sizeof(numbers[0]);
    
    // Initialize a variable to store the sum
    int sum = 0;
    
    // Loop through each element of the array.
    for (int i = 0; i < array_size; i++) {
        // Add the current element to the sum.
        sum += numbers[i];
    }
    
    // Print the final result to the console.
    printf("The sum of the array elements is: %d\n", sum);
    
    // Return 0 to indicate successful program execution.
    return 0;
}
