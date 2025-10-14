// #include<stdio.h>
// int main(){
//     int a=10;
//     int *p=&a;
//     printf("Value of a is %d\n",a);
//     printf("Address of a is %p\n",&a);
//     printf("Value of p is %p\n",p);
//     printf("Value at address p is %d\n",*p);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int x;
//     int y;
//     int *p=&x;
//     int *q=&y;
//     printf("Enter two numbers:");
//     scanf("%d %d",&x,&y);
//     printf("Before swapping: x=%d, y=%d\n",x,y);
//     int temp=*p;
//     *p=*q;
//     *q=temp;
//     printf("After swapping: x=%d, y=%d\n",x,y);
//     return 0;
// }
// #include<stdio.h>
//     int swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int x,y;
//     printf("Enter two numbers:");
//     scanf("%d %d",&x,&y);
//     swap(&x,&y);
//     printf("Before swapping: x=%d, y=%d\n",x,y);
//     printf("After swapping: x=%d, y=%d\n",x,y);
//     return 0;
// }
// #include<stdio.h>
// int swap(int *x,int *y){
//     *x=*x+*y;
//     *y=*x-*y;
//     *x=*x-*y;
// }
// int main(){
//     int x,y;
//     printf("Enter two numbers:");
//     scanf("%d %d",&x,&y);
//     printf("Before swapping: x=%d, y=%d\n",x,y);
//     swap(&x,&y);
//     printf("After swapping: x=%d, y=%d\n",x,y);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *p=arr;
//     for(int i=0;i<5;i++){
//         printf("Value of arr[%d] is %d\n",i,*(p+i));
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *p=arr;
//     for(int i=4;i>=0;i--){
//         printf("Value of arr[%d] is %d\n",i,*(p+i));
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             printf("Value of arr[%d][%d] is %d\n",i,j,arr[i][j]);
//         }
//     }
// return 0;
// }
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("Sum=%d",sum);
    return 0;
}
