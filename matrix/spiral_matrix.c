#include<stdio.h>
#define r 3
#define c 6

void main(){
    int array[r][c]={
        { 1, 2, 3, 4, 5, 6 },
        { 7, 8, 9, 10, 11, 12 },
        { 13, 14, 15, 16, 17, 18 }
    };

    spiral(array, r, c);
}

int spiral(int a[r][c], int m, int n){
     int i, row_min = 0, col_min = 0;
 
    /*  row_min - starting row index
        m - ending row index
        col_min - starting column index
        n - ending column index
        i - iterator
    */
 
    while (row_min < m && col_min < n) {
        /* Print the first row from the remaining rows */
        for (i = col_min; i < n; ++i) {
            printf("%d ", a[row_min][i]);
        }
        row_min++;
 
        /* Print the last column from the remaining columns
         */
        for (i = row_min; i < m; ++i) {
            printf("%d ", a[i][n - 1]);
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if (row_min < m) {
            for (i = n - 1; i >= col_min; --i) {
                printf("%d ", a[m - 1][i]);
            }
            m--;
        }
 
        /* Print the first column from the remaining columns
         */
        if (col_min < n) {
            for (i = m - 1; i >= row_min; --i) {
                printf("%d ", a[i][col_min]);
            }
            col_min++;
        }
    }
}