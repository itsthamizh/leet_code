/*

Given an m x n matrix. If an element is 0, 
set its entire row and column to 0. Do it in-place.

Example for,
    input: matrix={{1,1,1},
                    {1,0,1},
                    {1,1,1}

    }

    output: { 1 0 1
              0 0 0
              1 0 1
            }
*/



#include<stdio.h>

#define r 3
#define c 3

void main(){
    int i,j;
    int matrix[r][c]={{1,1,1},
                      {1,0,1},
                      {1,1,1}
                     };
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    set_zeros(matrix);
}
int set_zeros(int matrix[r][c]){  
    int answer[r][c];
    int i,j,k;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(matrix[i][j]==0){
                for(k=0;k<r;k++){
                    answer[i][k]=0;
                }
                for(k=0;k<c;k++){
                    answer[k][j]=0;
                }
            }
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(answer[i][j]!=0){
                answer[i][j]=matrix[i][j];
            }
        }
    }

    printf("\n\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",answer[i][j]);
        }
        printf("\n");
    } 
}