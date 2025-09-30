// #include<stdio.h>
// int main(){
//     int matrix[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("Enter element [%d][%d]:",i,j);
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("Matrix:\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d\t",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int a[2][2],b[2][2],sum[2][2];
    printf("Enter first 2x2 matrix:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second 2x2 matrix:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("sum of matrix :\n");
            for(int i=0;i<2;i++){
                printf("%d",sum[i][j]);
                printf("\n");
                    }
    }
}
    return 0;
    }