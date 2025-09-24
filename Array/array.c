// #include<stdio.h>
// int main(){
//     int arr[5]={1, 2, 3, 4, 5};
//     int i;  
//     for(i = 0; i < 5; i++){
//         printf(" %d", arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5]={1, 2, 3, 4, 5};
//     int i;  
//     for(i=4;i>=0;i--){
//         printf(" %d", arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5]={1, 2, 3, 4, 5};
//     int i;  
//     int sum = 0;
//     for(i=0;i<5;i++){
//         sum=sum+arr[i];
//     }
//     printf("Sum is %d", sum);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5];
//     int i,max ,min;
//     max=arr[0];
//     min=arr[0];
//     printf("Enter 5 elements=");
//     scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
//     for(i=0;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//      }
//       printf("max is %d",max);
//       for(i=0;i<5;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//       }
//       printf("\nmin is %d",min);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5],odd=0,even=0,i;
//     printf("Enter 5 elements=");    
//     scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
//     for(i=0;i<5;i++){
//         if(arr[i]%2==0){
//             printf("Even=%d\n",arr[i]);
//             even++;
//         }else{
//             printf("Odd=%d\n",arr[i]);
//             odd++;
//         }
//         }
        
//     return 0;
// }
#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter a size of array:");
    scanf("%d",&n);
    printf("Enter %d array element:",n);
    for(i=0;i<=n;i++){
        printf("\nElement %d:",i+1);
        scanf("%d",&arr[i]);
    }
       if(n>0){
            printf("It is a positive.");
        }else{
            printf("It is a negative.");
        }
    return 1;
}