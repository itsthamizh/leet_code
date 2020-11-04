/*

This proram for to find out the K weakest rows in the 
given matrix

Example for :
    input: {
        {1,1,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,1,0,0,0},
        {1,1,1,1,1}
    };  
    and value of k is k=2  

    output: 2 0 3 
*/


#include<stdio.h>
#define r 4
#define c 4
void main(){
    int array[r][c]={
        {1,1,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,1,0,0,0},
        {1,1,1,1,1}
    };
    weakest_row(array,3);
}
int weakest_row(int array[r][c],int val){
    int i,j,k,l;
    int a[r];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(array[i][j]== 1){
                k=k+1;
            }
        }
        if(k!=0){
            a[l]=k;
            l++;
        }
        k=0;
    }
    k=0;

    while(k<val){
        for(l=0;l<r;l++){
            if(k==a[l]){
                printf("%d ",l);
            }
        }
        k++;
    }
}