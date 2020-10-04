#include<stdio.h>

void main(){
    int array[]={7,8,9,11,12};
    int i=0,j=1,k;    
    while (j<4){
        if(array[i] < array[j]){
            k=array[i];
        }
        else{
            k=array[j];
            i=j;
        }
        j++;
    }
    printf("%d ",k);
}
    