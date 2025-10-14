// #include<stdio.h>
// int main(){
//     int heigth[9]={1,8,6,2,5,4,8,3,7};
//     int i=0;
//     int j=8;
//     int maxArea=0;
//      int h; // height of the container
//     //  w=width of the container;
//     while(i<j){
//         if(heigth[i]<heigth[j]){
//             h=heigth[i];
//             }else{
//                 h=heigth[j];
//             }
//             int w=j-i;
//             int Area=h*w;
//             if(Area>maxArea){
//                 maxArea=Area;
//             }
//             if(heigth[i]<heigth[j]){
//                 i++;
//             }
//             else{
//                 j--;
//             }
// }
// printf("%d",maxArea);
// return 0;
// }  
// Now, here is the completed code with user input for the container heights:
#include<stdio.h>
int main(){
    int heigth[100];
    int i=0;
    int j=8;
    int maxArea=0;
     int h,n; // height of the container
    //  w=width of the container;
    printf("Enter a size of array :");
    scanf("%d",&n);
    printf("Enter a elements of array :");
    for(int k=0;k<n;k++){
        scanf("%d",&heigth[k]);
    }
    while(i<j){
        if(heigth[i]<heigth[j]){
            h=heigth[i];
            }else{
                h=heigth[j];
            }
            int w=j-i;
            int Area=h*w;
            if(Area>maxArea){
                maxArea=Area;
            }
            if(heigth[i]<heigth[j]){
                i++;
            }
            else{
                j--;
            }
}
printf("%d",maxArea);
return 0;
}  