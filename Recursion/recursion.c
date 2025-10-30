// #include<stdio.h>
// void sum(){
//     sum();
//     printf("Hello");  // recursion: one function is again and again call it is called recursion.
// }
// int main(){
//     sum();
// }
//print number 1 to n.
// #include<stdio.h>
// void sum(int a){
//     if(a==0){  //condition break.
//         return;
//     }
//     sum(a-1); //logic.
//     printf("%d ",a);
// }
// int main(){
//     int n;
//     printf("Enter number of element :");
//     scanf("%d",&n);
//     sum(n);
// }
//print number 1 to n in reverse.
// #include<stdio.h>
// void sum(int a){
//     if(a==0){  //condition break.
//         return;
//     }
//     printf("%d ",a);
//      sum(a-1); 
// }
// int main(){
//     int n;
//     printf("Enter number of element :");
//     scanf("%d",&n);
//     sum(n);
// }
//PRINT SUM 1 TO N.
// #include<stdio.h>
// int sum(int a){
//     if(a==0){
//         return 0;
//     }
//     return a+sum(a-1);
// }
// int main(){
//     int data;
//     int n;
//     printf("Enter number :");
//     scanf("%d",&n);
//     data=sum(n);
//     printf("sum of %d to %d =%d ",1,n,data);
// }
//print multiple of 1 to n.
// #include<stdio.h>
// int multiply(int a){
//     if(a==1){
//         return 1;
//     }
//     return a*multiply(a-1);
// }
// int main(){
//     int result;
//     int n;
//     printf("Enter number :");
//     scanf("%d",&n);
//     result=multiply(n);
//     printf("Multiplication of 1 to %d = %d\n", n, result);
//     return 0;
// }
//print factorial number 1 to n.
// #include<stdio.h>

// int factorial(int n){
//     if(n == 0 || n == 1){
//         return 1;   // base case
//     }
//     return n*factorial(n - 1);
// }

// int main(){
//     int n, result;
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     result = factorial(n);
    
//     printf("Factorial of %d = %d\n", n, result);
//     return 0;
// }
//print power of 2 .
// #include<stdio.h>
// int power(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     return x*power(x,n-1);
// }
// int main(){
//     int data =power(2,3);
//     printf("%d",data);
// }
//sum of two array.
// #include<stdio.h>
// int SumArray(int arr[],int n){
//     if(n==0){
//         return 0;
//     }
//     return arr[n-1]+SumArray(arr,n-1);
// }
// int main(){
// int arr[5]={5,4,3,2,1};
// int n=5;
// int data;
// data = SumArray(arr,n);
// printf("%d",data);
// }
//wap to multiple two array.
#include<stdio.h>
int Multiplyarray(int arr1[],int arr2[],int n){
    if(n==0){
        return 1;
    }
    return arr1[n-1]*arr2[n-1]*Multiplyarray(arr1,arr2,n-1);
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int result,n;
    printf("Enter number of element :");
    scanf("%d",&n);
    printf("Enter %d first array element :",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter %d second array :",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    result=Multiplyarray(arr1,arr2,n);
    printf(" Multipication of two array : %d\n",result);
    return 0;
}