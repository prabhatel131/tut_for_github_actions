User
#include <stdio.h>

int main() {
    // Define an array with 10 elements
    int array[10];

    // Prompt the user to input values for the array
    printf("Enter 10 elements for the array:\n");

    // Loop to input values into the array
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }

    // Display the sum
    printf("Sum of the elements: %d\n", sum);

    return 0;
}
