
#include <stdio.h>

int main() 
{
        int array[10];

        printf("Enter 10 elements for the array:\n");
        for (int i = 0; i < 10; i++)
        {
            printf("Element %d: ", i + 1);
            scanf("%d", &array[i]);
        }
    int sum = 0;
    for (int i = 0; i < 10; i++) 
    {
        sum += array[i];
    }
    printf("Sum of the elements: %d\n", sum);

    return 0;
}
