/*

This proram for to find out the matrix block sum
from the given array

example for :
    input: mat = [ [1,2,3],
                   [4,5,6],
                   [7,8,9]
                 ]
             K = 1
    output: [[45,45,45],[45,45,45],[45,45,45]]

*/



#include<stdio.h>

void main(){
    int array[3][3]={{1,2,3},
                     {4,5,6},
                     {7,8,9}};
    int k=2;
    matrix_block_sum(array,k);
}
int matrix_block_sum(int array[3][3], int k){
    int i,j,m=3,n=3;
    int ans[3][3]={};
    for(i=0;i<n;i++ ){
        for(j=0;j<m;j++){
            for(int r=i-k;r<=i+k;r++){
                for(int c=j-k;c<=j+k;c++){
                    if(r>=0 && r<n && c>=0 && c<m){
                        ans[i][j]=ans[i][j]+ array[r][c];
                    }
                }

            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }

}