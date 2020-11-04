/*

This proram for to find out the nagative values int the given matrix

Example for :
    input: {{4,3,2,-1},
             {3,2,1,-1},
             {1,1,-1,-2},
             {-1,-1,-2,-3}
            };
    output: 8
*/


#include<stdio.h>
#define r 4
#define c 4


void main(){
    int k;
    int array[r][c]={{4,3,2,-1},
                     {3,2,1,-1},
                     {1,1,-1,-2},
                     {-1,-1,-2,-3}
                    };
    k=count_negative(array);

    printf("%d ", k);

}

int count_negative(int array[r][c]){
    int i,j,k;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(array[i][j] < 0){
                k=k+1;
            }
        }
    }
    return k;
}