// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     printf("Even Number:");
//     for(i=0;i<=n;i=i+2){
//         printf("%d\n",i);
//     }
//     return 1;
// }
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     printf("odd Number:");
//     for(i=1;i<=n;i=i+2){
//         printf("%d\n",i);
//     }
//     return 1;
// }
// #include<stdio.h>
// int main(){
//     int i,n,fact=1;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("Factorial of %d =%d\n",n,fact);
//     return 1;
// }
// #include<stdio.h>
// int main(){
//     int i,n,j;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     printf("\nMultiolication Tables from 1 to %d:\n",n);
//     for(i=1;i<=n;i++){
//         printf("Table of %d:\n",i);
//         for(j=1;j<=10;j++){
//             printf("%d*%d= %d\n",i,j,i*j);
//         }
// printf("\n");
//     }
//     return 1;
//}
// #include<stdio.h>
// int main(){
//     int i,n,j;
//     printf("Enter number of rows:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//     printf("\n");
// }
//     return 1;
// }
// #include<stdio.h>
// int main(){
//     int i,n,j;
//     printf("Enter number of rows:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//     printf("\n");
// }
//     return 1;
// }
#include<stdio.h>
int main(){
    int i,n,j;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        char ch='A';
        for(j=1;j<=i;j++){
            printf("%c ",ch);
       ch++;  
       }
    printf("\n");
}
    return 1;

}