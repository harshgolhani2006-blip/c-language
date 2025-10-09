// #include<stdio.h>
// int main(){
// int i,n;
// printf("Enter a value of n:");
// scanf("%d",&n);
// i=0;
// do{
//     printf("Jai Shree Ram\n");
//     i=i+1;
// }
// while(i<=n);
// }
// #include<stdio.h>
// int main(){
// int i,n;
// printf("Enter a value of n:");
// scanf("%d",&n);
// i=0;
// do{
//     printf("%d\t",i);
//     i++;
// }
// while(i<=n);
// return 1;
// }
// #include<stdio.h>
// int main(){
// int i,n;
// printf("Enter a value of n:");
// scanf("%d",&n);
// i=1;
// do{
//     printf("Even number:%d\t",i);
//     i=i+2;
// }
// while(i<=n);
// return 1;
// }
// #include<stdio.h>
// int main(){
// int i,n;
// printf("Enter a value of n:");
// scanf("%d",&n);
// i=1;
// do{
//     printf("Odd number:%d\t",i);
//     i++;
// }
// while(i<=n);
// return 1;
// }
// #include<stdio.h>
// int main(){
// int i,n,sum=0;
// printf("Enter a value of n:");
// scanf("%d",&n);
// i=1;
// do{
//     printf("Odd number:%d\n",i);
//     sum=sum+i;
//     i++;
// }
// while(i<=n);
// printf("\nSum of odd number :%d\n",sum);
// return 1;
// }
// #include<stdio.h>
// int main(){
// int i,n,sum=0;
// printf("Enter a value of n:");
// scanf("%d",&n);
// i=0;
// do{
//     printf("Even number:%d\n",i);
//     sum=sum+i;
//     i=i+2;
// }
// while(i<=n);
// printf("\nSum of Even number :%d\n",sum);
// return 1;
// }
// #include<stdio.h>
// int main(){
// int i,n;
// printf("Enter a value of n:");
// scanf("%d",&n);
// i=1;
// do{
//    printf("%d*%d=%d\n",n,i,n*i);
//    i++;
// }
// while(i<=10);
// return 1;
// }
// #include<stdio.h>
// int main(){
// int i,n,fact=1;
// printf("Enter a value of n:");
// scanf("%d",&n);
// i=1;
// do{
//     fact=fact*i;
//     i++;
// }
// while(i<=n);
// printf("\nFactorial of %d :%d\n",n,fact);
// return 1;
// }
// #include<stdio.h>
// int main(){
//     int  start,end,i,j;
//     printf("Enter number to start :");
//     scanf("%d",&start);
//     printf("Enter number to end :");
//     scanf("%d",&end);
//     i=start;
//     do{
//         j=1;
//         do{
//             printf("%d * %d = %d\n",i,j,i*j);
//             j++;
//         }while(j<=10);
//         printf("\n");
//         i++;
//     }
//     while(i<=end);
//     return 0;
// }
#include<stdio.h>
int main(){
int n,i,j,count;
printf("Enter a number:");
scanf("%d",&n);
printf("Prime number from 1 to %d are :\n",n);
i=2;
do{
    count=1;
    j=2;
    do{
        if(i%j==0){
            count=0;
            break;
        }
        j++;
    }
    while(j<=i/2);
    if(count ==1 && i>1){
        printf(" %d ",i);
    }
    i++;
}
while(i<=n);
return 0;
}