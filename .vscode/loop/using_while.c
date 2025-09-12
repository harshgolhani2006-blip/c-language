//#include<stdio.h>
//int main(){
  //int number , lastDigit, reverse=0, real;
 // printf("Enter number :");
  //scanf("%d",&number);
  //real=number;
  //while(number!=0){
    //lastDigit=number%10;
    //reverse=reverse*10+ lastDigit;
   // number=number /10;
  //}
  //if(real ==reverse){
    //printf("%d is a Palindrome\n",real);
  ///}else{
    //printf("%d is not Palindrome\n",real);
  //}
  //return 1;
//}
//#include<stdio.h>
//int main()
//{
//int i=1,fact=1,num; 
//printf("Enter value of number:");
//scanf("%d",&num);
//while(i<=num)
//{
  //  fact=fact*i;
//i++;
//}
//printf("Factorial of %d= %d\t",num,fact);
//return 0;
//}
//#include<stdio.h>
//int main(){
  //int n, i=2,prime=1;
 // printf("Enter a number:");
  //scanf("%d",&n);
  //if(n<=1){
    //prime=0;
  //}else{
    //while (i<=n/2)
    //{
      //if(n%i==0){/* code */
//prime=0;
  //  break;
  //i++;}
  //}
//}/
//if(prime==1)
//printf("%d is a prime number\n",n);
//else
//printf("%d is not prime number\n",n);
//return 1;
//}
#include<stdio.h>
int main(){
  int n, num=2;
  printf("Enter the limit:");
  scanf("%d",&n);
  while(num<=n){
    int i=2, prime=1;
    while (i<=num/2)
    {
      if(num%i==0){
        prime=0;
        break;
      }
    i++;
  }
  if(prime==1){
    printf("%d\n",num);
  }
    num++;
}
return 1;
}