// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     i=0;
//     while(i<=n){
//         printf("Harsh Golhani\n",i);
//         i++;
//     }
//     return 0;
// }
//PRINT NORMAL NUMBER---
// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     i=0;
//     while(i<=n){
//         printf("%d\t",i);
//         i++;
//     }
//     return 0;
// }
//PRINT OF EVEN NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     i=1;
//     while(i<=n){
//         printf("Even Number:%d\n",i);
//         i=i+2;
//     }
//     return 0;
// }
//PRINT OF ODD NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     i=0;
//     while(i<=n){
//         printf("Odd Number:%d\n",i);
//         i=i+2;
//     }
//     return 0;
// }
//SUM OF NORMAL NUMBER---
// #include<stdio.h>
// int main(){
// int i,n, sum=0;
// printf("Enter how many numbers you want to add :");
// scanf("%d",&n);
// int num;
// i=0;
// while(i<=n){
//     printf("Enter number %d =",i);
//     scanf("%d",&num);
//     sum=sum+num;
//     i++;
// }
// printf("The sum is :%d\n",sum);
// return 0;
// }
//SUM OF EVEN NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n,sum=0;
//     printf("Enter the limit :");
//     scanf("%d",&n);
//     i=1;
//     while(i<=n){
//         sum=sum+i;
//         i=i+2;
//     }
// printf("Sum of Even number upto %d= %d\n",n,sum);
// return 0;
// }
//SUM OF ODD NUMBER---
// #include<stdio.h>
// int main(){
// int i,n ,sum=0;
// printf("Enter a limit :");
// scanf("%d",&n);
// i=0;
// while(i<=n){
//     printf("%d\n",i);
//     sum=sum+i;
//     i=i+2;
// }
// printf("sum of odd number %d:%d\n",n,sum);
// return 0;
// }
//TABLE ---
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter number you want to those number table:");
//     scanf("%d",&n);
//     i=0;
//     printf("Table of %d:\n",n);
//     while(i<=10){
//         printf(" %d * %d = %d\n ",n,i,n*i);
//         i++;
//     }
// //     return 0;
// // }
//PRINT ALL TABLE---
// #include <stdio.h>
// int main() {
//     int start, end, i, j;

//     printf("Enter start number: ");
//     scanf("%d", &start);

//     printf("Enter end number: ");
//     scanf("%d", &end);

//     i = start;

//     while (i <= end) {
//         printf("\nMultiplication Table of %d:\n", i);
//         j = 1;
//         while (j <= 10) {
//             printf("%d x %d = %d\n", i, j, i * j);
//             j++;
//         }
//         i++;
//     }

//     return 0;
// }
//FACTORIAL NUMBER----
// #include<stdio.h>
// int main(){
//   int i,n,fact;
//   printf("Enter the value of n:");
//   scanf("%d",&n);
//   i=1;
// fact=1;
// while(i<=n){
//     fact=fact*i;
//   i++;
// }
//   printf("factorial of %d is %d\n",n,fact);
// return 1;
// }
//
//PRIME NUMBER---
#include<stdio.h>
int main(){
    int i,num,count;
    printf("Enter the limmit :");
    scanf("%d",&num);
    int n=2;
    printf("Prime number 1 to %d:\n",num);
    while(n<=num){
        i=1;
        count=0;

        while(i<=n){
        if(n % i==0){
          count++;
        }
        i++;
    }
    if(count==2){
        printf(" %d ",n);
    }
    n++;
}
return 1;
}