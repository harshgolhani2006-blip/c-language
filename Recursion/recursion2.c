// //WAP to find palindrome help of recursion.
// #include<stdio.h>
// int palindrome(int arr[],int i,int j){
//     if(i>=j){
//         return 1;
//     }
//     if(arr[i]!=arr[j]){
//         return 0;
//     }
//     return palindrome(arr,++i,--j);
// }
// int main() {
//     int arr[100];
//     int n, i, result;

//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     printf("Enter %d elements: ", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     result = palindrome(arr, 0, n - 1);

//     if (result == 1)
//         printf("Array is palindrome\n");
//     else
//         printf("Array is not palindrome\n");

//     return 0;
// }
//WAP to binary search using recursion.
// #include<stdio.h>
// int BinarySearch(int arr[], int i, int j, int target) {
//     if (i > j) {
//         return -1;  // Element not found
//     }

//     int mid = (i + j) / 2;

//     if (arr[mid] == target) {
//         return mid;  // Element found
//     } 
//     else if (arr[mid] < target) {
//         return BinarySearch(arr, mid + 1, j, target);
//     } 
//     else {
//         return BinarySearch(arr, i, mid - 1, target);
//     }
// }
// int main() {
//     int arr[100];
//     int n, target, result;

//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     printf("Enter %d elements (in sorted order): ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter target element: ");
//     scanf("%d", &target);

//     result = BinarySearch(arr, 0, n - 1, target);

//     if (result == -1)
//         printf("Element not found.\n");
//     else
//         printf("Element found at index: %d\n", result);

//     return 0;
// }
// //WAP to find even and odd
#include<stdio.h>
int printEvenOdd(int arr[],int i,int n){
    if(i==n){
        return 0;
    }
    if(arr[i]%2==0){
        printf("%d is Even\n",arr[i]);
    }else{
        printf("%d is Odd\n",arr[i]);
    }
    printEvenOdd(arr,i+1,n);
}
int main(){
    int arr[100];
    int n;
    int i;
    printf("Enter number of element: ");
    scanf("%d",&n);
    printf("Enter %d element of array :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEven and Odd number :\n");
    printEvenOdd(arr,0,n);
    return 1;
}