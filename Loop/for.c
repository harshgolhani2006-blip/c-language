// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         printf(" Jai shree Ram ");
//     }
//     return 0;
// }
//PRINT NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n ;
//     printf("Enter number:");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         printf("%d\t",i);
//     }
//     return 0;
// }
//EVEN NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter a value of n :");
//     scanf("%d",&n);
//     for(i=1;i<=n;i=i+2){
//     printf("Even number:%d\n",i);
//     }
//return 1;
// }
//PRINT ODD NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter a value of n :");
//     scanf("%d",&n);
//     for(i=0;i<=n;i=i+2){
//     printf("Odd number:%d\n",i);
//     }
//     return 1;
// }
//PRINT NORMAL NUMBER AND ADD---
// #include<stdio.h>
// int main(){
// int i,n, sum=0;
// printf("Enter how many numbers you want to add :");
// scanf("%d",&n);
// int num;
// for(i=0;i<=n;i++){
//     printf("Enter number %d =",i);
//     scanf("%d",&num);
//     sum=sum+num;
// }
// printf("The sum is :%d\n",sum);
// return 0;
// }
//SUM OF EVEN NUMBER---
// #include<stdio.h>
// int main(){
//     int i, n,sum=0;
//     printf("Enter value of n :");
//     scanf("%d",&n);
//     for(i=1;i<=n;i=i+2){
//         printf("%d\n",i);
//         sum=sum+i;
//     }
//     printf("sum of Even number :%d",sum);
//     return 0;
// }
//SU OF ODD NUMBER---
// #include<stdio.h>
// int main(){
//     int i, n,sum=0;
//     printf("Enter value of n :");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         printf("%d\n",i);
//         sum=sum+i;
//     }
//     printf("sum of Odd number :%d",sum);
//     return 0;
// }
//FACTORIAL NUMBER---
// #include<stdio.h>
// int main(){
//     int i,n,fact=1;
// printf("Enter the value of n :");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     fact=fact*i;
// }
//  printf("Factorial of %d is %d",n,fact);
// return 1;
// }
//TABLE---
// #include<stdio.h>
// int main(){
//     int i,n,table=1;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     printf("Table of %d :\n",n);
//     for(i=1;i<=10;i++){
//     printf("%d * %d =%d\n",n,i,i*n);
//     }
//     return 0;
// }
//PRINT ALL TABLE---
// #include<stdio.h>
// int main(){
//     int start,end,i,j;
//     printf("Enter a start of table:");
//     scanf("%d",&start);
//     printf("Enter a end of table:");
//     scanf("%d",&end);
//     i=start;
//     for(i=0;i<=end;i++){
//         printf("\nMultipication of table %d:\n",i);
//         for(int j=1;j<=10;j++){
//             printf("%d * %d=%d\n",i,j,i*j);    
//         }
//     }
//     return 0;
// }
//PRIME NUMBER---
#include<stdio.h>
int main(){
    int i,num,count,n;
    printf("Enter the limmit :");
    scanf("%d",&num);
    printf("Prime number 1 to %d:\n",num);
  for(n=2;n<=num;n++){
     count=0;  
    for(i=1;i<=n;i++){ 
        if(n % i==0){
          count++;
        }
    }
    if(count==2){
        printf(" %d\n ",n);
    }
}
return 1;
}