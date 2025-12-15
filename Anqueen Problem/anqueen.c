#include <stdio.h>

int n;
int board[20][20];

int isSafe(int row, int col) {
    int i, j;

    // check left row
    for (i = 0; i < col; i++)
        if (board[row][i] == 1)
            return 0;

    // check upper diagonal
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 1)
            return 0;

    // check lower diagonal
    for (i = row, j = col; i < n && j >= 0; i++, j--)
        if (board[i][j] == 1)
            return 0;

    return 1;
}

int solve(int col) {
    if (col == n)
        return 1;   // all queens placed

    for (int row = 0; row < n; row++) {
        if (isSafe(row, col)) {

            // place queen
            board[row][col] = 1;

            // recursive call
            if (solve(col + 1))
                return 1;

            // backtrack
            board[row][col] = 0;
        }
    }
    return 0;
}

int main() {
    printf("Enter value of n: ");
    scanf("%d", &n);

    // initialize board
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            board[i][j] = 0;

    if (solve(0)) {
        printf("\nSolution:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 1)
                    printf(" Q ");
                else
                    printf(" . ");
            }
            printf("\n");
        }
    } else {
        printf("No solution exists\n");
    }

    return 0;
}
