// #include<stdio.h>
// int main(){
//     int i,n,j;
//     printf("Enter value of n :");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         char ch='A';
//         for(j=0;j<n;j++){
//             printf("%c",ch);
//             ch++;
//         }
//     printf("\n");
// }
// return 0 ;
// }
// #include<stdio.h>
// int main(){
//     int i,n,j;
//     printf("Enter value of n :");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         char ch='A';
//         for(j=0;j<=i;j++){
//             printf("%c",ch);
//             ch++;
//         }
//     printf("\n");
// }
// return 0 ;
// }
// #include<stdio.h>
// int main(){
//     int i,n,j;
//     printf("Enter value of n :");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         char ch='A';
//         for(j=n;j>i;j--){
//             printf("%c",ch);
//             ch++;
//         }
//     printf("\n");
// }
// return 0 ;
// }
// #include<stdio.h>
// int main(){
//     int i,n,j;
//     printf("Enter value of n :");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
      
//         for(j=0;j<n;j++){
//            printf(" ");
//         }
//         char ch='A';
//         for(int k=0;k<=i;k++){
//             printf("%c",ch);
//             ch++;

//         }
//     printf("\n");
// }
// return 0 ;
// }
//     #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  value of n:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }char ch='A';
//         for(int k=0;k<=i;k++){
//             printf("%c",ch);
//             ch++;
//         }
//     printf("\n");
// }
// return 1;  
// }      
// #include<stdio.h>
// int main(){
//     int i,n,j,num=65;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=0;j<=i;j++){
//             printf("%c",num++);
//         }
//         printf("\n");
//     }
//     return 1;
// }
// #include<stdio.h>
// int main(){
//     int i,n,j,num=65;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=n;j>i;j--){
//             printf(" ");
//         }for(int k=0;k<=i;k++){
//             printf(" %c",num++);
//         }
//         printf("\n");
//     }
//     return 1;
// }
// #include<stdio.h>
// int main(){
//     int i,j,n,k,p;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=n-1;j>i;j--){
//             printf(" ");
//         }
//         for(k=0;k<=i;k++){
//             printf("*");
//         }
//         for(p=1;p<=i;p++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 1;
//}
// #include<stdio.h>
// int main(){
//     int i,n,j,num=65,p,k;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=n-1;j>i;j--){
//             printf(" ");
//         }
//         for(k=0;k<=i;k++){
//             printf("%c",num++);
//         }
//         for(p=1;p<=i;p++){
//             printf("%c",num++);
//         }
//         printf("\n");
//     }
//     return 1;
// }
// #include<stdio.h>
// int main(){
//     int i,n,j,p,k;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=0;j<=i;j++){
//             printf(" ");
//         }
//         for(k=n-1;k>i;k--){
//             printf("*");
//         }
//         for(p=n-1;p>=i;p--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 1;
// }
#include<stdio.h>
int main(){
    int i,n,j,p,k,num=65;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(k=n-1;k>i;k--){
            printf("%c",num++);
        }
        for(p=n-1;p>=i;p--){
            printf("%c",num++);
        }
        printf("\n");
    }
    return 1;
}
