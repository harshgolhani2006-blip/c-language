// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5,6,5,7,8,9,10};
//     int target=5;
//     for(int i=0;i<5;i++){
//         if(arr[i]==target){
//             printf("Element found at index %d\n",i);
//             return 0;
//         }
//     }
// }
// #include <stdio.h>
// int main() {
//     int arr[7] = {-1, 2, 4, 5, 4, 3, 7};
//     int n = 7;  // Initialize n to the size of the array
//     int k = 3;
//     int window_sum = 0;
//     int max_sum = 0;

//     // First window sum
//     for(int i = 0; i < k; i++) {
//         window_sum += arr[i];
//     }
//     max_sum = window_sum;

//     // Sliding the window
//     for(int i = k; i < n; i++) {
//         window_sum = window_sum + arr[i] - arr[i - k];
//         if(window_sum > max_sum) {
//             max_sum = window_sum;
//         }
//     }

//     printf("Max sum of %d consecutive elements is %d\n", k, max_sum);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int arr[7] = {-1, 2, 4, 5, 4, 3, 7};
//     int k = 3;
//     int n=    sizeof(arr)/sizeof(arr[0]);
//     int data=maxArraySum(arr, n, k);
//     printf("%d",data);
// }
#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter element to search: ");
    scanf("%d", &search);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element %d found at index %d (position %d)\n", search, i, i + 1);
            found = 1;
            break;  // Remove this 'break' if you want to find all occurrences
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
