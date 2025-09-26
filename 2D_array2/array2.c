// #include<stdio.h>
// int main(){
// int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
// int arr1[12];
// int k=0;
// for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//         arr1[k]=arr[i][j];
//         k++;
//     }
// }
// printf("The 1D array is:\n");
// for(int i=0;i<12;i++){
//     printf("%d ",arr1[i]);
// }
// }
// #include<stdio.h>
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int num=0;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }
// printf("The reverse of the 2D array is:\n");
//    for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//            arr[i][j];
//               num++;
//     }

// }
// for(int i=0;i<3;i++){
//     for(int j=3-1;j>=0;j--){
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }
//     return 0;
// }
//sliding window technique :-
// #include<stdio.h>
// int main(){
//     int arr[20]={1,2,3,4,5,10,2,4,5,6,46,23,24,5,6};
//     int k=3;
//     int wSum=0;
//     for(int i=0;i<k;i++){
//         wSum+=arr[i];
//     }
//     int maxSum=wSum;
//     for(int i=k;i<20;i++){   
//         wSum+=arr[i]-arr[i-k];
//         if(wSum>maxSum){
//             maxSum=wSum;
//         }
//     }
//     printf("The maximum sum of %d consecutive elements is: %d",k,maxSum);
//     return 0;
// }
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
for(int j=0;j<=n-i;j++){      
            printf(" *");
        }

        printf("JAI MATA DI \n");
    }
    return 0;
}
