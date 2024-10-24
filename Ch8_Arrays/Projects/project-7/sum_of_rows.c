#include <stdio.h>


int main(){

    int row_cols[5][5] = {0};
    int row_totals[5] = {0};
    int col_totals[5] = {0};
    

    for (int rows = 0; rows<5; rows++){
        printf("Enter row %d: ", rows+1);
        for(int col=0; col<5; col++){
            scanf("%d", &row_cols[rows][col]);
            row_totals[rows]+= row_cols[rows][col];
            col_totals[col] += row_cols[rows][col];
        }

        
    }

    for (int i = 0; i<5; i++){
        for (int j = 0; j < 5; j++){
            printf("%10d ", row_cols[i][j]);
        }
        printf("\n");
    }
    printf("Row Totals: ");
    for (int i = 0; i<5; i++){
        printf("%d ", row_totals[i]);
    }
    printf("\nColumn Totals: ");
    for (int i = 0; i<5; i++){
        printf("%d ", col_totals[i]);
    }
    printf("\n");





    return 0;
}