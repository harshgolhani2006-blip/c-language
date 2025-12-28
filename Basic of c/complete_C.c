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
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float principal,rate,time,CI;

//     printf("Enter principal amount :");
//     scanf("%f",&principal);

//     printf("Enter rate of interest :");
//     scanf("%f",&rate);

//     printf("Enter time in years :");
//     scanf("%f",&time);

//     CI=principal*pow((1+rate/100),time)-principal;
//     printf("Compound Interest is: %f",CI);
//     return 1;
// }
//find the perimeter of rectangle.
//#include<stdio.h>
// int main(){
//     float length,breadth,Perimeter;

//     printf("Enter length of rectangle :");
//     scanf("%f",&length);

//     printf("Enter breadth of rectangle :");
//     scanf("%f",&breadth);

//     Perimeter=2*(length+breadth);
//     printf("Perimeter of rectangle: %f",Perimeter);
//     return 1;
// }
//find the perimeter of square.
// #include<stdio.h>
// int main(){
//     float side,Perimeter;

//     printf("Enter side of square :");
//     scanf("%f",&side);

//     Perimeter=4*side;
//     printf("Perimeter of square: %f",Perimeter);
//     return 1;
// }
//find the perimeter of circle.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float radius,Perimeter;

//     printf("Enter radius of circle :");
//     scanf("%f",&radius);

//     Perimeter=2*3.14*radius;
//     printf("Perimeter of circle: %f",Perimeter);
//     return 1;
// }   
//find the volume of cube.
// #include<stdio.h>
// int main(){
//     float side,Volume;

//     printf("Enter side of cube :");
//     scanf("%f",&side);

//     Volume=side*side*side;
//     printf("Volume of cube: %f",Volume);
//     return 1;
// }
//find the volume of cuboid.
// #include<stdio.h> 
// int main(){
//     float length,breadth,height,Volume;

//     printf("Enter length of cuboid :");
//     scanf("%f",&length);

//     printf("Enter breadth of cuboid :");
//     scanf("%f",&breadth);

//     printf("Enter height of cuboid :");
//     scanf("%f",&height);

//     Volume=length*breadth*height;
//     printf("Volume of cuboid: %f",Volume);
//     return 1;
// } 
//find the volume of cylinder.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float radius,height,Volume;

//     printf("Enter radius of cylinder :");
//     scanf("%f",&radius);

//     printf("Enter height of cylinder :");
//     scanf("%f",&height);

//     Volume=3.14*radius*radius*height;
//     printf("Volume of cylinder: %f",Volume);
//     return 1;
// }  
//find the volume of sphere.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float radius,Volume;

//     printf("Enter radius of sphere :");
//     scanf("%f",&radius);

//     Volume=(4.0/3.0)*3.14*radius*radius*radius;
//     printf("Volume of sphere: %f",Volume);
//     return 1;
// }
//find the volume of cone.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float radius,height,Volume;

//     printf("Enter radius of cone :");
//     scanf("%f",&radius);

//     printf("Enter height of cone :");
//     scanf("%f",&height);

//     Volume=(1.0/3.0)*3.14*radius*radius*height;
//     printf("Volume of cone: %f",Volume);
//     return 1;
// }
//find the factorial of number.
// #include<stdio.h>   
// int main(){
//     int n,i,factorial=1;

//     printf("Enter a positive integer: ");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++){
//         factorial=factorial*i;
//     }
//     printf("Factorial of %d = %d",n,factorial);
//     return 1;
// }
//find the n terms of fibonacci series.
// #include<stdio.h>
// int main(){
//     int n,i;
//     int t1=0,t2=1,nextTerm;

//     printf("Enter the number of terms: ");
//     scanf("%d",&n);

//     printf("Fibonacci Series: \n");

//     for(i=1;i<=n;i++){
//         printf("%d, ",t1);
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
//     return 1;
// }
