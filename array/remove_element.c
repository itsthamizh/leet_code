#include<stdio.h>

void main(){
    int array[7]={1,2,2,3,2,4,2};
    int val=2;
    int i=0;
    int j;
    for(j=0;j<7;j++){
        if(array[j] != val){
            array[i]=array[j];
            i++;
        }
    }
    for(int k=0;k<i;k++){
        printf("%d ",array[k]);
    }
}