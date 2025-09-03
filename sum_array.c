#include <stdio.h>

/**
 * @brief This program calculates the sum of all elements in an integer array.
 *
 * It initializes an integer array with predefined values, then iterates through
 * the array to add each element to a running total. Finally, it prints the
 * total sum to the console.
 */
int main(void) {
    // Declare and initialize an integer array with sample values.
    int numbers[] = {10, 20, 30, 40, 50};
    
    // Calculate the number of elements in the array.
    // This makes the loop dynamic and works for any array size.
    int array_size = sizeof(numbers) / sizeof(numbers[0]);
    
    // Initialize a variable to store the sum.
    // It is good practice to initialize variables to 0 to avoid garbage values.
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
