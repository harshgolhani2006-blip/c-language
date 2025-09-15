// #include<stdio.h>
// int cube(int n){
//     return n*n*n;
// }
// int square(int n){
//     return n*n;
// }
// int main(){
//     int n,cube1,square1;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     cube1=cube(n);
//     printf("Cube of %d:%d\n",n,cube1);
//     square1=square(n);
//     printf("Square of %d : %d\n",n,square1);
//     return 0;
// }
// #include<stdio.h>
// float Circle(float radius){
//     return 2*3.14*radius;
// }
// int main(){
//     float radius,circle1;
//     printf("Enter a radius of circle:");
//     scanf("%f",&radius);
//     circle1=Circle(radius);
//     printf("Area of circle is : %f\n",circle1);
//     return 0;
// }
// #include<stdio.h>
// int perimeter(int length,int breadth){
//     return 2*(length*breadth);
// }
// int area(int length,int breadth){
//     return length*breadth;
// }
// int main(){
//     int len,bread,Area,Perimeter;
//     printf("Enter a length :");
//     scanf("%d",&len);
//     printf("Enter a breadth :");
//     scanf("%d",&bread);
//     Area=area(len,bread);
//     printf("Area of rectangle is :%d\n",Area);
//     Perimeter=perimeter(len,bread);
//     printf("Perimeter of rectangle is :%d",Perimeter);
//     return 0;
// }
// #include<stdio.h>
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
// int main(){
//     int n,fact;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     fact=factorial(n);
//     printf("Factorial of %d is :%d\n",n,fact);
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// float areacircle(float r){
//     return 3.14*r*r;
// }
// float areaRectangle(float l, float b){
//     return l*b;
// }
// float areaSquare(float side){
//     return side*side;
// }
// float  areaTriangle(float b,float h){
//     return 0.5*b*h;
// }
// float areaParallelogram(float b,float h){
//     return b*h;
// }
// float areaTrapezium(float a,float b,float h){
//     return 0.5*(a+b)*h;
// }
// float areaEllipse(float a,float b){
//     return 3.14*a*b;
// }
// float areaRhombus(float d1,float d2){
//     return 0.5*d1*d2;
// }
// float areaEquilateralTriangle(float side){
//     return (sqrt(3)/4)*side*side;
// }
// int main(){
//     int choice;
//     float r,l,b,side,h,a,d1,d2;
//     printf("\n======================================\n");
//     printf("Welcome to the Area Calculation Program!\n");
//     printf("Choose a shape to calculate area:\n");
//     printf("======================================\n");
//     printf("1. Circle\n");
//     printf("2. Rectangle\n");
//     printf("3. Square\n");
//     printf("4. Triangle\n");
//     printf("5. Parallelogram\n");
//     printf("6. Trapezium\n");
//     printf("7. Ellipse\n");
//     printf("8. Rhombus\n");
//     printf("9. Equilateral Triangle\n");
//     printf("10. Exit\n");
//     printf("Enter your choice (1-9): ");
//     scanf("%d",&choice);
//     switch(choice){
//         case 1:
//             printf("Enter radius of circle:");
//             scanf("%f",&r);
//             printf("Area of circle: %f\n",areacircle(r));
//             break;
//         case 2:
//             printf("Enter length and breadth of rectangle:");
//             scanf("%f%f",&l,&b);
//             printf("Area of rectangle: %f\n",areaRectangle(l,b));
//             break;
//         case 3:
//             printf("Enter side of square:");
//             scanf("%f",&side);
//             printf("Area of square: %f\n",areaSquare(side));
//             break;
//         case 4:
//             printf("Enter base and height of triangle:");
//             scanf("%f%f",&b,&h);
//             printf("Area of triangle: %f\n",areaTriangle(b,h));
//             break;
//         case 5:
//             printf("Enter base and height of parallelogram:");
//             scanf("%f%f",&b,&h);
//             printf("Area of parallelogram: %f\n",areaParallelogram(b,h));
//             break;
//         case 6:
//             printf("Enter lengths of parallel sides and height of trapezium:");
//             scanf("%f%f%f",&a,&b,&h);
//             printf("Area of trapezium: %f\n",areaTrapezium(a,b,h));
//             break;
//         case 7:
//             printf("Enter semi-major and semi-minor axes of ellipse:");
//             scanf("%f%f",&a,&b);
//             printf("Area of ellipse: %f\n",areaEllipse(a,b));
//             break;
//         case 8:
//             printf("Enter diagonals of rhombus:");
//             scanf("%f%f",&d1,&d2);
//             printf("Area of rhombus: %f\n",areaRhombus(d1,d2));
//             break;
//             case 9:
//             printf("Enter side of equilateral triangle:");
//             scanf("%f",&side);
//             printf("Area of equilateral triangle: %f\n",areaEquilateralTriangle(side));
//             break;
//             case 10:
//             printf("Exiting the program. Thank you!\n");
//         default:
//             printf("Invalid choice! Please try again.\n");
//     }
//     return 0;
// }
#include<stdio.h>
#include<math.h>
// ----------surface area of 3D shapes----------------
float surfaceSphere(float r){
    return 4*3.14*r*r;
}
float surfaceCylinder(float r,float h){
    return 2*3.14*r*h+2*3.14*r*r;
}
float surfaceCone(float r,float h){
    return 3.14*r*(r+sqrt(h*h+r*r));
}
float surfacecube(float side){
    return 6*side*side;
}
float surfaceCuboid(float l,float b,float h){
    return 2*(l*b+b*h+h*l);
}
float surfaceHemisphere(float r){
    return 3*3.14*r*r;
}
float surfaceTetrahydron(float a){
    return sqrt(3)*a*a;
}
float surfaceSquarePyramid(float a,float h){
    return a*a+2*a*sqrt((a/2)*(a/2)+h*h);
}
float surfaceTriangularPrism(float b,float h,float l){
    return (b*h)+2*(l*sqrt((b/2)*(b/2)+h*h))+(b*l);
}
float surfaceTorus(float R,float r){
    return 4*3.14*3.14*R*r;
}
float surfaceoctahedron(float a){
    return 2*sqrt(3)*a*a;
}
int main(){
    int choice;
    float r,h,side,l,b,a,R;
    printf("\n======================================\n");
    printf("Welcome to the Surface Area Calculation Program!\n");
    printf("Choose a 3D shape to calculate surface area:\n");
    printf("======================================\n");
    printf("1. Sphere\n");
    printf("2. Cylinder\n");
    printf("3. Cone\n");
    printf("4. Cube\n");
    printf("5. Cuboid\n");
    printf("6. Hemisphere\n");
    printf("7. Tetrahedron\n");
    printf("8. Square Pyramid\n");
    printf("9. Triangular Prism\n");
    printf("10. Torus\n");
    printf("11. Octahedron\n");
    printf("12. Exit\n");
    printf("Enter your choice (1-11): ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter radius of sphere:");
            scanf("%f",&r);
            printf("Surface area of sphere: %f\n",surfaceSphere(r));
            break;
        case 2:
            printf("Enter radius and height of cylinder:");
            scanf("%f%f",&r,&h);
            printf("Surface area of cylinder: %f\n",surfaceCylinder(r,h));
            break;
        case 3:
            printf("Enter radius and height of cone:");
            scanf("%f%f",&r,&h);
            printf("Surface area of cone: %f\n",surfaceCone(r,h));
            break;
        case 4:
            printf("Enter side of cube:");
            scanf("%f",&side);
            printf("Surface area of cube: %f\n",surfacecube(side));
            break;
        case 5:
            printf("Enter length, breadth and height of cuboid:");
            scanf("%f%f%f",&l,&b,&h);
            printf("Surface area of cuboid: %f\n",surfaceCuboid(l,b,h));
            break;
        case 6:
            printf("Enter radius of hemisphere:");
            scanf("%f",&r);
            printf("Surface area of hemisphere: %f\n",surfaceHemisphere(r));
            break;
        case 7:
            printf("Enter side of tetrahedron:");
            scanf("%f",&a);
            printf("Surface area of tetrahedron: %f\n",surfaceTetrahydron(a));
            break;
            case 8:
            printf("Enter base side and height of square pyramid:");
            scanf("%f%f",&a,&h);
            printf("Surface area of square pyramid: %f\n",surfaceSquarePyramid(a,h));
            break;
            case 9:
            printf("Enter base, height and length of triangular prism:");
            scanf("%f%f%f",&b,&h,&l);
            printf("Surface area of triangular prism: %f\n",surfaceTriangularPrism(b,h,l));
            break;
            case 10:
            printf("Enter major radius and minor radius of torus:");
            scanf("%f%f",&R,&r);
            printf("Surface area of torus: %f\n",surfaceTorus(R,r));
            break;
            case 11:
            printf("Enter side of octahedron:");    
            scanf("%f",&a);
            printf("Surface area of octahedron: %f\n",surfaceoctahedron(a));
            break;
            case 12:
                printf("Exiting the program. Thank you!\n");
            break;
        default:    
            printf("Invalid choice! Please try again.\n");
    }
    return 0;
    
        }
