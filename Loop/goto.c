// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter a value of n:");
//     scanf("%d",&n);
//     i=0;
//     Name:
//     printf(" Radhe Radhe ");
//     i++;
//     if(i<=n){
//         goto Name;
//     }
//     return 0;
// }
//NORMAL NUMBER----
// #include<stdio.h>
// int main(){
// int i,n;
// printf("Enter a value of n:");
// scanf("%d",&n);
// i=1;
// Number:
// printf("%d\t",i);
// i++;
// if(i<=n){
//     goto Number;
// }
// return 1;
// }
// EVEN NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter a value of n :");
//     scanf("%d",&n);
//     i=1;
//     Even:
//     printf("%d\t",i);
//     i=i+2;
//     if(i<=n){
//         goto Even;
//     }
// return 1;
// }
// ODD NUMBER----
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter a value of n:");
//     scanf("%d",&n);
//     i=0;
//     Odd:
//     printf("%d\t",i);
//     i=i+2;
//     if(i<=n){
//         goto Odd;
//     }
//     return 1;
// }
// SUM OF NORMAL NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n,sum=0;
//     printf("Enter a value of n:");
//     scanf("%d",&n);
//     i=0;
//     Sum:
//     sum=sum+i;
//     printf("%d\t",sum);
//     i++;
//     if(i<=n){
//         goto Sum;
//     }
//     printf("Sum of number: %d",sum);
// }
// SUM OF EVEN NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n,sum=0;
//     printf("Enter a value of n:");
//     scanf("%d",&n);
//     i=1;
//     Sum:
//     printf("%d\t",sum);
//     sum =sum+i;
//     i=i+2;
//     if(i<=n){
//         goto Sum;
//     }
//     printf("sum of even number :%d\n",sum);
//     return 0;
// }
// SUM OF ODD NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n,sum=0;
//     printf("Enter a value of n:");
//     scanf("%d",&n);
//     i=0;
//     Sum:
//     sum=sum+i;
//     i=i+2;
//     printf("%d\t",sum);
//     if(i<=n){
//         goto Sum;
//     }
//     printf("Sum of odd number:%d\n",sum);
//     return 1;
// }
//FACTORIAL OF NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n,fact;
//     printf("Enter a value of n:");
//     scanf("%d",&n);
//     i=1;
//     fact=1;
//     Factorial:
//     fact=fact*i;
//     i++;
//     if(i<=n){
//         goto Factorial;
//     }
//     printf("Factorial of %d = %d",n,fact);
//     return 0;
// }
#include <stdio.h>

int main() {
    int start, end, i, j;

    printf("Enter starting point of table: ");
    scanf("%d", &start);

    printf("Enter ending point of table: ");
    scanf("%d", &end);

    i = start; // Start from first table

table_start:
    if (i > end)
        goto end_program;

    printf("\nTable of %d:\n", i);
    j = 1;

table_loop:
    if (j > 10)
        goto next_table;

    printf("%d x %d = %d\n", i, j, i * j);
    j++;
    goto table_loop;

next_table:
    i++;
    goto table_start;

end_program:
    return 0;
}
