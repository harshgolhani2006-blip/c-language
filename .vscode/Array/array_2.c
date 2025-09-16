// #include<stdio.h>
// int main(){
//     int n,i,a[10],b[10],sum[10];
//     printf("Enter size of array:");
//     scanf("%d",&n);
//     printf("Enter %d elements of first array:",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter %d element of second array:",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&b[i]);
//     }   
//     for(i=0;i<n;i++){
//         sum[i]=a[i]+b[i];
//     }
//     printf("\nSum of two array is:");
//     for(i=0;i<n;i++){
//         printf("%d ",sum[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n,i,a[10],b[10],sub[10];
//     printf("Enter size of array:");
//     scanf("%d",&n);
//     printf("Enter %d elements of first array:",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter %d element of second array:",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&b[i]);
//     }   
//     for(i=0;i<n;i++){
//         sub[i]=a[i]-b[i];
//     }
//     printf("\nSubraction of two array is:");
//     for(i=0;i<n;i++){
//         printf("%d ",sub[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n,i,a[10],b[10],mult[10];
//     printf("Enter size of array:");
//     scanf("%d",&n);
//     printf("Enter %d elements of first array:",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter %d element of second array:",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&b[i]);
//     }   
//     for(i=0;i<n;i++){
//         mult[i]=a[i]*b[i];
//     }
//     printf("\nmultipication of two array is:");
//     for(i=0;i<n;i++){
//         printf("%d ",mult[i]);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n,i,a[10],b[10],div[10];
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter %d elements of first array:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter %d element of second array:",n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }   
    for(i=0;i<n;i++){
        div[i]=a[i]*b[i];
    }
    printf("\ndivision of two array is:");
    for(i=0;i<n;i++){
        printf("%d ",div[i]);
    }
    return 0;
}