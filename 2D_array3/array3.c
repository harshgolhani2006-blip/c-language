// #include<stdio.h>
// int main()
// {
//     int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
//     int i,j;
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 1;
// }
#include <stdio.h>

void add(int r, int c, int a[r][c], int b[r][c], int result[r][c]) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            result[i][j] = a[i][j] + b[i][j];
}

void sub(int r, int c, int a[r][c], int b[r][c], int result[r][c]) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            result[i][j] = a[i][j] - b[i][j];
}

void multiply(int r, int c, int a[r][c], int b[r][c], int result[r][c]) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) {
            result[i][j] = 0;
            for(int k = 0; k < c; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
}

int divide(int r, int c, int a[r][c], int b[r][c], float result[r][c]) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) {
            if(b[i][j] != 0)
                result[i][j] = (float)a[i][j] / b[i][j];
            else {
                printf("Error: Division by zero at position (%d, %d)\n", i, j);
                return -1;
            }
        }
    return 0;
}

void printMatrix(int r, int c, int matrix[r][c]) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

void printMatrixFloat(int r, int c, float matrix[r][c]) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%.2f ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int r, c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], result[r][c];
    float divResult[r][c];

    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    int choice;
    printf("Enter your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            add(r, c, a, b, result);
            printf("Resultant Matrix after Addition:\n");
            printMatrix(r, c, result);
            break;
        case 2:
            sub(r, c, a, b, result);
            printf("Resultant Matrix after Subtraction:\n");
            printMatrix(r, c, result);
            break;
        case 3:
            multiply(r, c, a, b, result);
            printf("Resultant Matrix after Multiplication:\n");
            printMatrix(r, c, result);
            break;
        case 4:
            if(divide(r, c, a, b, divResult) != -1) {
                printf("Resultant Matrix after Division:\n");
                printMatrixFloat(r, c, divResult);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
