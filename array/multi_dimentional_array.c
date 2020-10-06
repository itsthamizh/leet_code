/*

This program for multi-dimentional array

*/


#include<stdio.h>

void main(){
    int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%3d",array[i][j]);
        }
        printf("\n\n");
    }
}


/*

This program for multi-dimentional array

example for : int array[i][j][k];

*/

#include<stdio.h>

void main(){
    int array[2][3][4]={ {{1,2,3,4},{5,6,7,8},{9,10,11,12}},
                            {{11,12,13,14},{15,16,17,18},{19,20,21,22}}
                        };
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<4;k++){
                printf("%4d",array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}