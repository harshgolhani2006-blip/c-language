// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  value of n:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("* ");
//         }
//     printf("\n");
// }
// return 1;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  value of n:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             printf("* ");
//         }
//     printf("\n");
// }
// return 1;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  value of n:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=n;j>i;j--){
//             printf("* ");
//         }
//     printf("\n");
// }
// return 1;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  value of n:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int k=0;k<=i;k++){
//             printf(" *");
//         }
//     printf("\n");
// }
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter  value of n:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int k=0;k<=i;k++){
//             printf("*");
//         }
//     printf("\n");
// }
// return 1;
// }
#include<stdio.h>
int main(){
    int n;
    printf("Enter  value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=n;k>i;k--){
            printf("*");
        }
    printf("\n");
}
return 1;
}

