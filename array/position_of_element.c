/*
{5,7,7,8,8,10
This program for to find out the given targets position
of the array elements

example for:
        input : array is [2,3,4,4,4,5] and target=4
        output: 2,3,4 (this also for the position of targets)
                otherwise, the target is not place in the list to 
                print value of [-1,-1]

*/

#include<stdio.h>

void main(){
    int array[]={5,7,7,8,8,10};
    int a[]={};
    int i, j=0, k=0, target=2;
    
    for(i=0;i<6;i++){
        if(array[i]==target){
            k=i;
            printf("%d ",i);
            //a[j]=i;
            //j++;
        }
    }
    if(k==0){
        printf("-1,-1");
    }
}