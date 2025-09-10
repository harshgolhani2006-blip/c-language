// #include<stdio.h>
// int main(){
//     int i,n,j;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=0;j<=i;j++){
//             printf("*");
        
// }for(int k=n-1;k>i;k--){
//     printf(" ");
// }for(int k=n-1;k>i;k--){
//     printf(" ");
// }for(int p=0;p<=i;p++){
//     printf("*");
// }
//    printf("\n");
//  }

// for(i=0;i<n;i++){
//         for(j=n-1;j>i;j--){
//             printf("*");
        
// }for(int k=0;k<=i;k++){
//     printf(" ");
// }for(int k=0;k<=i;k++){
//     printf(" ");
// }for(int p=n-1;p>i;p--){
//     printf("*");
// }
//    printf("\n");
//  }
// return 1;
// }
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(i==1||i==n||k==1||k==n){
               printf("*");  
            }else{
                printf(" ");
            }
            
        }
    printf("\n");
}
}

