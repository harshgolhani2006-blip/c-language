#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int *ptr;
    int i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory
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

    printf("Elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    // Free memory
    free(ptr);

    printf("\nMemory successfully freed");

    getch();
    return 0;
}