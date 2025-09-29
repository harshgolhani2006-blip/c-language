// #include<stdio.h>
// int main(){
//     int a;
//     int *p;
//     printf("Enter the value of a: ");
//     scanf("%d",&a);
//     p=&a;
//     printf("The value of a is %d\n",a); 
//     printf("The value of a is %d\n",*p);
//     printf("The address of a is %p\n",&a);
//     printf("The address of a is %p\n",p);
//     printf("The address of p is %p\n",&p);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[10];
//     int *p=arr;
//     printf("Enter the values of array: \n");
//     scanf("%d%d%d%d%d%d%d%d%d%d",p,p+1,p+2,p+3,p+4,p+5,p+6,p+7,p+8,p+9);
//     for(int i=0;i<10;i++){
//         printf("Enter the value of element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<10;i++){
//         printf("The value of element %d is %d\n",i+1,*(p+i));
//     }    return 0;
// }
#include<stdio.h>
#define PI 3.14
void areaRectangle(int *l,int *b){
    int area=(*l)*(*b);
    printf("The area of rectangle is %d\n",area);
}
void areaTriangle(float *b,float *h){
    float area=0.5*(*b)*(*h);
    printf("The area of triangle is %f\n",area);
}
void areaCircle(float *r){
    float area=PI*(*r)*(*r);
    printf("The area of circle is %f\n",area);
}
int main(){
    int l,b;
    float r,h;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);
    areaRectangle(&l,&b);
    printf("Enter the base and height of triangle: ");
    scanf("%f%f",&r,&h);
    areaTriangle(&r,&h);
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    areaCircle(&r);
    return 0;
}   