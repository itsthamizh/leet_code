/*

This program for move zeros into the last position 

example for:
    input: 0,1,0,3,12
    output: 1,3,12,0,0

*/


#include<stdio.h>

void main(){
    int array[5]={0,1,0,3,12};
    int i,j,k,temp;
    for(k=0;k<5;k++){
        if(array[k]==0){
            temp=array[k];
            i=k, j=k+1;
            while(i<4){
                array[i]=array[j];
                i++;
                j=i+1;
            }
            array[j-1]=temp;
        }
    }
    for(k=0;k<5;k++){
        printf("%d ",array[k]);
    }
}