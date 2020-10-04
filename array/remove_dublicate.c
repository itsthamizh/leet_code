#include<stdio.h>

void main(){
    int array[10]={11,21,21,41,41,61,71,71,91,91};
    int i=0;
    int j;
    for(j=0;j<10;j++){
        if(array[j] != array[i]){
            i++;
            array[i]=array[j];
        }
    }
    int n=i+1;
    for(int k=0;k<n;k++){
        printf("%d ",array[k]);
    }
}