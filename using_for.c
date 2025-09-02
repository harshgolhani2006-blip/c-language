//#include<stdio.h>
//int main(){
   // int i,n;
    //printf("Enter a value of n :");
    //scanf("%d",&n);
    //for(i=n;i<=n;i++){
      //  printf("%d\n",i);
    //}
//return 1;
//}
//#include<stdio.h>
//int main(){
  //  int i,n;
   // printf("Enter a value of n :");
    //scanf("%d",&n);
    //for(i=n;i>0;i--){
      //  printf("%d\n",i);
    //}
//return 1;
//}
//int main(){
  //  int i,n;
   // printf("Enter a value of n :");
    //#include<stdio.h>
    //scanf("%d",&n);
    //for(i=0;i<=n;i=i+2){
      //  printf("Even Number: %d\n",i);
   // }
//return 1;
//}
//#include<stdio.h>
//int main(){
  //  int i,n;
    //printf("Enter a value of n :");
    //scanf("%d",&n);
    //for(i=1;i<=n;i=i+2){
      //  printf("odd Number: %d\n",i);
    //}
//return 1;
//}
//#include<stdio.h>
//int main(){
    //int i,n,sum;
    //printf("Enter the value of n :");
    //scanf("%d",&n);
    //sum=0;
    //for(i=1;i<=n;i++){
      //  sum=sum+i;
    //}
  //  printf("sum= %d\n",sum);  
//}
#include<stdio.h>
int main(){
int n,sum,digit;
printf("Enter a number: ");
scanf("%d",&n);
sum=0;
while(n>0){
  digit=n%10;
  sum=sum+digit;
  n=n/10;
}
printf("sum=%d\n",sum);
}