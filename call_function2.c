// #include<stdio.h>
// int mult(int a, int b){
//     return a*b;
// }
// int main(){
//     int a,b,multiple;
//     printf("Enter a first number:");
//     scanf("%d",&a);
//     printf("Enter a second number:");
//     scanf("%d",&b);
//     multiple=mult(a,b);
//     printf("Multiple of %d and %d =%d\n",a,b,multiple);
//     return 0;
// }
// #include<stdio.h>
// float div(float a,float b){
//     return a/b;
// }
// int main(){
//     float a,b,division;
//     printf("Enter a first number:");
//     scanf("%f",&a);
//     printf("Enter a second number:");
//     scanf("%f",&b);
//     division=div(a,b);
//     printf("Division of %f and %f = %f\n",a,b,division);
//     return 0;
// }
// #include<stdio.h>
// int eve(int n){
//      if(n%2==0){
//         printf("It is a Even number");
//     }else{
//         printf("It is not a Even number");
//        }
//           return n=n/2;
// }
// int main(){
//     int n,even;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     even=eve(n);
//     return 0;
// }
// #include<stdio.h>
// int odd(int n){
//      if(n%2!=0){
//         printf("It is a Odd number");
//     }else{
//         printf("It is not a Odd number");
//        }
//          return n=n/2;
// }
// int main(){
//     int n,odd1;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     odd1=odd(n);
//     return 0;
// }
// #include<stdio.h>
// int prime(int n){
//      int i,flag=0;
//      for(i=2;i<=n/2;i++){
//         if(n%i==0){
//             flag=1;
//             break;
//         }
//      }
//      if(flag==0){
//         printf("It is a Prime number");
//      }else{
//         printf("It is not a Prime number");
//      }
//        return n=n/2;
// }
// int main(){
//     int n,prime1;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     prime1=prime(n);
//     return 0;
// }
// #include<stdio.h>
// int whole(int n){
//         if(n>=0){
//             printf("It is a Whole number");
//         }else{
//             printf("It is not a Whole number");
//         }
//             return n=n/2;
// }
//  int main(){
//     int n,whole1;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     whole1=whole(n);
//     return 0;
//  }
#include<stdio.h>
int posi(int n){
        if(n>0){
            printf("It is a Positive number");
        }else{
            printf("It is not a negative number");
        }
            return n=n/2;
}
 int main(){
    int n,posi1;
    printf("Enter a number :");
    scanf("%d",&n);
    posi1=posi(n);
    return 0;
 }