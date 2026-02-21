#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int *ptr;
    int i, n, new_n, sum = 0;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    // Initial memory allocation using malloc
    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not allocated");
        getch();
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    // Reallocating memory
    printf("Enter new size of array: ");
    scanf("%d", &new_n);

    ptr = (int*)realloc(ptr, new_n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory reallocation failed");
        getch();
        return 0;
    }

    // If new size is larger, take extra inputs
    if(new_n > n)
    {
        printf("Enter %d more elements:\n", new_n - n);
        for(i = n; i < new_n; i++)
        {
            scanf("%d", ptr + i);
        }
    }

    // Calculate sum
    for(i = 0; i < new_n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of %d elements = %d\n", new_n, sum);

    free(ptr);   // Free memory
    getch();
    return 0;
}