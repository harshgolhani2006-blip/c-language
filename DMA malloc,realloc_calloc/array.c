//DMA:-(Dynamic Memory Allocation)
//Array using malloc function
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     printf("Enter the size of array:");
//     scanf("%d",&n);
//     int *arr=(int*)malloc(n*sizeof(int));//malloc function is a dynamic memory allocation function
//     //malloc function returns a void pointer so we typecast it to int pointer n*4
//     printf("Enter %d elements of array:",n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         free(arr);//free function is used to free the allocated memory
//     }  
//     printf("The elements of array : ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     } 
// }
//ARRAY REARRANGEMENT
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, i, j = 0;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);

//     int *arr = (int*)malloc(n * sizeof(int)); // Dynamic memory allocation

//     printf("Enter %d elements of array: ", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int *result = (int*)malloc(n * sizeof(int)); // temporary array for rearrangement

//     // 1️⃣ First, zeros
//     for (i = 0; i < n; i++) {
//         if (arr[i] == 0) {
//             result[j++] = arr[i];
//         }
//     }

//     // 2️⃣ Next, negative numbers
//     for (i = 0; i < n; i++) {
//         if (arr[i] < 0) {
//             result[j++] = arr[i];
//         }
//     }

//     // 3️⃣ Finally, positive numbers
//     for (i = 0; i < n; i++) {
//         if (arr[i] > 0) {
//             result[j++] = arr[i];
//         }
//     }

//     printf("The rearranged array is:\n");
//     for (i = 0; i < n; i++) {
//         printf("%d ", result[i]);
//     }

//     free(arr);
//     free(result);
//     return 0;
// }
//REALLOCATE MEMORY USING REALLOC FUNCTION
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, i, newSize;

//     printf("Enter the size of array: ");
//     scanf("%d", &n);

//     int *arr = (int*)malloc(n * sizeof(int)); // allocate memory

//     printf("Enter %d elements of array: ", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("The elements of array are: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     printf("\nNow enter the new size of array: ");
//     scanf("%d", &newSize);

//     arr = (int*)realloc(arr, newSize * sizeof(int)); // reallocate memory : RESIZE THE MEMORY
//     printf("Enter %d elements of array: ", newSize);
//     for (i = 0; i < newSize; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("The elements of array are: ");
//     for (i = 0; i < newSize; i++) {
//         printf("%d ", arr[i]);
//     }

//     free(arr); // free allocated memory
//     return 0;
// }

//CALLOC FUNCTION
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int *arr=(int*)calloc(n,sizeof(int));//calloc function is used to allocate memory and initialize it to zero
    printf("Enter %d element of array:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }   
    printf("The elements of array are:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}