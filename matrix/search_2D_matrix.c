/*

Find the target is place or not from the given matrix 

example for:
    input: {{1,   4,  7, 11, 15},
              {2,   5,  8, 12, 19},
              {3,   6,  9, 16, 22},
              {10, 13, 14, 17, 24},
              {18, 21, 23, 26, 30}
            };
        target=5

    output: true

*/


#include<stdio.h>
#define r 5
#define c 5
void main(){
    int matrix[r][c]={{1,   4,  7, 11, 15},
                      {2,   5,  8, 12, 19},
                      {3,   6,  9, 16, 22},
                      {10, 13, 14, 17, 24},
                      {18, 21, 23, 26, 30}
                    };
    int target=5;
    search_2D(matrix,target);
}

int search_2D(int matrix[r][c], int target){
    int i,j,k=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(matrix[i][j]==target){
                k=k+1;
            }
        }
    }
    if(k>0){
        printf("\ntrue");
    }
    else{
        printf("\nfalse");
    }
}