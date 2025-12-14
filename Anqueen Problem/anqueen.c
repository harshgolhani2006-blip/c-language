#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int board[n][n];  
    int i, j, row, col = 0;
    int placed;

    // initialize board with 0
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            board[i][j] = 0;

    while (col >= 0 && col < n) {
        placed = 0;

        for (row = 0; row < n; row++) {

            // check left row
            for (i = 0; i < col; i++)
                if (board[row][i] == 1)
                    break;
            if (i < col) continue;

            // check upper diagonal
            for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
                if (board[i][j] == 1)
                    break;
            if (i >= 0 && j >= 0) continue;

            // check lower diagonal
            for (i = row, j = col; i < n && j >= 0; i++, j--)
                if (board[i][j] == 1)
                    break;
            if (i < n && j >= 0) continue;

            // place queen
            board[row][col] = 1;
            placed = 1;
            break;
        }

        if (placed)
            col++;
        else {
            col--;
            if (col < 0) break;

            for (row = 0; row < n; row++) {
                if (board[row][col] == 1) {
                    board[row][col] = 0;
                    break;
                }
            }
        }
    }

    // print solution
    printf("\nSolution:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (board[i][j] == 1)
                printf(" Q ");
            else
                printf(" . ");
        }
        printf("\n");
    }
    // print positions
    printf("\nQueen Positions (Row, Column):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (board[i][j] == 1)
                printf("Queen at (%d, %d)\n", i, j);
        }
    }

    return 0;
}
