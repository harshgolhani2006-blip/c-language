//Prime number
// #include<stdio.h>
// int prime(int n){
//     int mid=n/2;
//     int flag=0;
//     for(int i=2;i<=mid;i++){
//         if(n%i==0){
//             return 0;
//         }else
//         return 1;
//     }
// }
// void main(){
//     int n,i;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         if(prime(i)){
//             printf("%d\n",i);
//         }
//     }
// }
//SUM of two numbers
// #include<stdio.h>
// int add(int a,int b);
// int main(){
//     int a,b,sum;
//     printf("Enter first number:");
//     scanf("%d",&a);
//     printf("Enter second number:");
//     scanf("%d",&b);
//     sum = add(a,b);
//     printf("sum= %d\n",sum);
//     return 0;
// }
// int add(int a,int b){
//     return a+b;
// }
//FIND MAGIC NUMBER
// #include<stdio.h>
// int digit_sum(int n){
//     int sum=0;
//     if(n<10){
//         return n;
//     }
//     while(n>0){
//         int lastdigit= n%10;
//         sum= sum+lastdigit;
//         n=n/10;
//     }
//     int d=sum;
// }
// void main(){
//     int n,sum=0;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     sum= digit_sum(n);
//     while(sum>=10){
//         sum=digit_sum(sum);
//     }
//     printf("last sum:%d\n",sum);
//     if(sum==1)
//     printf("If is a magic number");
//     else 
//     printf("It is not a magic number");
// }
//ODD numbers
// #include<stdio.h>
// int odd(int n){
//     int i;
//     for(i=1;i<=n;i++){
//         printf("%d\n",(2*i-1));
//     }
// }
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     odd(n);
//     return 0;
// }
//Even numbers
// #include<stdio.h>
// int Even(int n){
//     int i;
//     for(i=0;i<=n;i++){
//         printf("%d\n",2*i);
//     }
// }
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     Even(n);
//     return 0;
// }
//SUBTRACTION of two numbers
#include<stdio.h>
int sub(int a,int b);
    int main(){
        int a,b,suc;
        printf("Enter first number:");
        scanf("%d",&a);
        printf("Enter second number:");
        scanf("%d",&b);
        suc=sub(a,b);
        printf("sub is=%d\n",suc);
   return 0;  
 }

 int sub(int a,int b){
return a-b;
}