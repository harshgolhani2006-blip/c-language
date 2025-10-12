#include<stdio.h>
// #include<math.h>
// // ----------surface area of 3D shapes----------------
// float surfaceSphere(float r){
//     return 4*3.14*r*r;
// }
// float surfaceCylinder(float r,float h){
//     return 2*3.14*r*h+2*3.14*r*r;
// }
// float surfaceCone(float r,float h){
//     return 3.14*r*(r+sqrt(h*h+r*r));
// }
// float surfacecube(float side){
//     return 6*side*side;
// }
// float surfaceCuboid(float l,float b,float h){
//     return 2*(l*b+b*h+h*l);
// }
// float surfaceHemisphere(float r){
//     return 3*3.14*r*r;
// }
// float surfaceTetrahydron(float a){
//     return sqrt(3)*a*a;
// }
// float surfaceSquarePyramid(float a,float h){
//     return a*a+2*a*sqrt((a/2)*(a/2)+h*h);
// }
// float surfaceTriangularPrism(float b,float h,float l){
//     return (b*h)+2*(l*sqrt((b/2)*(b/2)+h*h))+(b*l);
// }
// float surfaceTorus(float R,float r){
//     return 4*3.14*3.14*R*r;
// }
// float surfaceoctahedron(float a){
//     return 2*sqrt(3)*a*a;
// }
// int main(){
//     int choice;
//     float r,h,side,l,b,a,R;
//     printf("\n======================================\n");
//     printf("Welcome to the Surface Area Calculation Program!\n");
//     printf("Choose a 3D shape to calculate surface area:\n");
//     printf("======================================\n");
//     printf("1. Sphere\n");
//     printf("2. Cylinder\n");
//     printf("3. Cone\n");
//     printf("4. Cube\n");
//     printf("5. Cuboid\n");
//     printf("6. Hemisphere\n");
//     printf("7. Tetrahedron\n");
//     printf("8. Square Pyramid\n");
//     printf("9. Triangular Prism\n");
//     printf("10. Torus\n");
//     printf("11. Octahedron\n");
//     printf("12. Exit\n");
//     printf("Enter your choice (1-11): ");
//     scanf("%d",&choice);
//     switch(choice){
//         case 1:
//             printf("Enter radius of sphere:");
//             scanf("%f",&r);
//             printf("Surface area of sphere: %f\n",surfaceSphere(r));
//             break;
//         case 2:
//             printf("Enter radius and height of cylinder:");
//             scanf("%f%f",&r,&h);
//             printf("Surface area of cylinder: %f\n",surfaceCylinder(r,h));
//             break;
//         case 3:
//             printf("Enter radius and height of cone:");
//             scanf("%f%f",&r,&h);
//             printf("Surface area of cone: %f\n",surfaceCone(r,h));
//             break;
//         case 4:
//             printf("Enter side of cube:");
//             scanf("%f",&side);
//             printf("Surface area of cube: %f\n",surfacecube(side));
//             break;
//         case 5:
//             printf("Enter length, breadth and height of cuboid:");
//             scanf("%f%f%f",&l,&b,&h);
//             printf("Surface area of cuboid: %f\n",surfaceCuboid(l,b,h));
//             break;
//         case 6:
//             printf("Enter radius of hemisphere:");
//             scanf("%f",&r);
//             printf("Surface area of hemisphere: %f\n",surfaceHemisphere(r));
//             break;
//         case 7:
//             printf("Enter side of tetrahedron:");
//             scanf("%f",&a);
//             printf("Surface area of tetrahedron: %f\n",surfaceTetrahydron(a));
//             break;
//             case 8:
//             printf("Enter base side and height of square pyramid:");
//             scanf("%f%f",&a,&h);
//             printf("Surface area of square pyramid: %f\n",surfaceSquarePyramid(a,h));
//             break;
//             case 9:
//             printf("Enter base, height and length of triangular prism:");
//             scanf("%f%f%f",&b,&h,&l);
//             printf("Surface area of triangular prism: %f\n",surfaceTriangularPrism(b,h,l));
//             break;
//             case 10:
//             printf("Enter major radius and minor radius of torus:");
//             scanf("%f%f",&R,&r);
//             printf("Surface area of torus: %f\n",surfaceTorus(R,r));
//             break;
//             case 11:
//             printf("Enter side of octahedron:");    
//             scanf("%f",&a);
//             printf("Surface area of octahedron: %f\n",surfaceoctahedron(a));
//             break;
//             case 12:
//                 printf("Exiting the program. Thank you!\n");
//             break;
//         default:    
//             printf("Invalid choice! Please try again.\n");
//     }
//     return 0;
    
//         }