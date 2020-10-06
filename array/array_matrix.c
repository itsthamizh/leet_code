/*

This program for Two dimentional arrays

*/

#include<stdio.h>

void main(){
    int array[2][2]={{1,2},{3,4}};
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf(" %d ",array[i][j]);
        }
        printf("\n");
    }
}


/*

This program for Three dimentional array matrix

*/


#include<stdio.h>

void main(){
    int array[3][3]={{1,2,3},{4,5.6},{7,8,9}};
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}


