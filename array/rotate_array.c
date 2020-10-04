/*

This program for rotate the given array for k index values

example for :
    input : array=[1,2,3,4,5,6,7], value of k = 3;

    output: 5 6 7 1 2 3 4

*/

#include<stdio.h>

void main(){
    int k=3,val=0;
    int array[7]={1,2,3,4,5,6,7};

    while(val!=k){
        int i=6,j;
        int last=array[i];

        for(j=i-1;j>=0;j--){
            array[i]=array[j];
            i--;
        }

        array[i]=last;
        val++;
    }
    for(int i=0;i<7;i++){
        printf("%d ",array[i]);
    }
}