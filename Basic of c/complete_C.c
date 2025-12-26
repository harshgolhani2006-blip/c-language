//Print your name.
// #include<stdio.h>
// int main(){
//     printf("Harsh Golhani");
// }
//Wap to add two number.
// #include<stdio.h>
// int main(){
//     float a,b,sum;

//     printf("Enter a one Number : ");
//     scanf("%f",&a);

//     printf("Enter a two number : ");
//     scanf("%f",&b);

//     sum=a+b;
//     printf("Sum of %f and %f is =%f\n",a,b,sum);
// }
//Wap to div two number .
// #include<stdio.h>
// int main(){
//     float a,b,div;

//     printf("Enter first number :");
//     scanf("%f",&a);
//     printf("Enter second number :");
//     scanf("%f",&b);

//     div=a/b;
//     printf("Division of %f and %f is = %f\n",a,b,div);
//     return 1;
// }
//find average .
// #include<Stdio.h>
// int main(){
//     int n,i;
//     float num,sum=0,average;

//     //ask user to enter size .
//     printf("Enter how many numbers: ");
//     scanf("%d", &n);

//     //Number input .
//     for(i=1;i<=n;i++){
//         printf("Enter number %d: ",i);
//         scanf("%f", &num);
//         sum=sum+num;
//     }
//     //calculate.
//     average=sum/n;

//     //output.
//     printf("Average =%f",average);
     
//     return 0;
// }
//find the area of circle.
// #include<stdio.h>
// int main(){
//     float radius,Area;

//     printf("Enter radius of circle :");
//     scanf("%f",&radius);

//     Area=(3.14*radius*radius);
//     printf("Area of circle: %f",Area);
//     return 1;
// }
//find the area of rectangle.
// #include<stdio.h>
// int main(){
//     float length,breadth,Area;

//     printf("Enter length of rectangle :");
//     scanf("%f",&length);

//     printf("Enter breadth of rectangle :");
//     scanf("%f",&breadth);

//     Area=length*breadth;
//     printf("Area of rectangle: %f",Area);
//     return 1;
// } 
//find the area of triangle.
// #include<stdio.h>
// int main(){
//     float base,height,Area;

//     printf("Enter base of triangle :");
//     scanf("%f",&base);

//     printf("Enter height of triangle :");
//     scanf("%f",&height);

//     Area=0.5*base*height;
//     printf("Area of triangle: %f",Area);
//     return 1;
// }
//find the simple interest.
// #include<stdio.h>
// int main(){
//     float principal,rate,time,SI;

//     printf("Enter principal amount :");
//     scanf("%f",&principal);

//     printf("Enter rate of interest :");
//     scanf("%f",&rate);

//     printf("Enter time in years :");
//     scanf("%f",&time);

//     SI=(principal*rate*time)/100;
//     printf("Simple Interest is: %f",SI);
//     return 1;
// }
//find the compound interest.
#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,CI;

    printf("Enter principal amount :");
    scanf("%f",&principal);

    printf("Enter rate of interest :");
    scanf("%f",&rate);

    printf("Enter time in years :");
    scanf("%f",&time);

    CI=principal*pow((1+rate/100),time)-principal;
    printf("Compound Interest is: %f",CI);
    return 1;
}