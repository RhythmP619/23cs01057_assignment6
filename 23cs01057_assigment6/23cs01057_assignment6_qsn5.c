#include <stdio.h>

int main(){
    int row, col;
    printf("Enter the dimensions of the matrix: ");
    scanf("%d %d", &row, &col);
    printf("Enter the original matrix: ");
    int a[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("The transposed matrix is: \n");

    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

}