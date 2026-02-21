#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int *ptr;
    int i, n, sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation using calloc
    ptr = (int*)calloc(n, sizeof(int));

    // Check if memory is allocated
    if(ptr == NULL)
    {
        printf("Memory not allocated");
        getch();
        return 0;
    }

    printf("Enter the elements:\n");

    // Input elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    // Calculate sum
    for(i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of %d elements = %d\n", n, sum);

    avg = (float)sum / n;
    printf("Average = %.2f\n", avg);

    // Free allocated memory
    free(ptr);

    getch();
    return 0;
}