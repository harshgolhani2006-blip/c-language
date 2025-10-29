// #include<stdio.h>
// int main(){
//     int n;

//     printf("Enter number :");
//     scanf("%d",&n);
//     if(n&1){
//         printf("Odd");
//     }else{
//         printf("Even");
//     }
//     return 0;
// }
//WAP to find unique element with help of EX-OR.
// #include<stdio.h>
// int main(){
//     int n,i, xor=0;
//     int arr[100];
//     printf("Enter number of element :");
//     scanf("%d",&n);
//     printf("Enter %d element of array :",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         xor=xor^arr[i];
//     }
//     printf("Unique element :");
//         printf("%d",xor);
     
//       return 0;
//}
// WAP swap the number with help of ex
// #include<stdio.h>
// int main(){
//     int n,m,resut;
//     printf("Enter first number :");
//     scanf("%d",&n);
//     printf("Enter second number :");
//     scanf("%d",&m);
//         n=n^m;
//         m=n^m;
//         n=n^m;
//     printf("%d %d",n,m);
// }
//WAP to shift the element left and rigth.
// #include<stdio.h>
// int main(){
//     int n;
//     int leftshift;
//     int rightshift;
//     int againshiftleft;
//     int againshiftright;
//     printf("Enter number :");
//     scanf("%d",&n);
//       leftshift=n<<1;
//       rightshift=n>>1;
//       againshiftleft=leftshift<<1;
//       againshiftright=rightshift>>1;
      
//     printf("%d",leftshift);
//     printf("\n%d",rightshift);
//     printf("\n%d",againshiftleft);
//     printf("\n%d",againshiftright);
// } 
//WAP to find missing number with help binary number.
#include<stdio.h>
int main(){
int arr[100];
int xor=0;
int xor1=0;
int n,i;
printf("Enter number of element :");
scanf("%d",&n);
printf("Enter %d element of array :",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=1;i<=n+1;i++){
    xor=xor^i;
}
for(int i=0;i<n;i++){
    xor1=xor1^arr[i];
}
printf("Missing Number :%d\n ",xor^xor1);
}