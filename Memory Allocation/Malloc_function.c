#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int *ptr;
    int i,n,sum=0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    // Dynamic memory allocation
    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("The required amount of memory is not allocated");
        getch();
        return 0;
    }

    printf("Enter the elements:\n");

    // Taking input
    for(i=0; i<n; i++){
        scanf("%d", ptr+i);
    }

    // Calculating sum
    for(i=0; i<n; i++){
        sum += *(ptr+i);
    }

    printf("Sum of %d elements of array is: %d\n", n, sum);

    avg = (float)sum / n;
    printf("Average of %d elements of array is: %.2f\n", n, avg);

   // free(ptr);  // Free allocated memory
    getch();
    return 0;
}