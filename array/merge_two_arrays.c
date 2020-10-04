/*
This program for merge the two sorted arrays 

example for
    input: array_1=[1,2,3]
           array_2=[2,5,6]

    output: [1,2,2,3,5,6]

*/


#include<stdio.h>

void main(){
    int num1[3]={1,2,3};
    int num1_size=sizeof num1/sizeof num1[0];
    int num2[3]={2,5,6};
    int num2_size=sizeof num1/sizeof num1[0];
    int size=num1_size+num2_size;
    int array[size];
    int i=0,j=0,k=0;

    if(num1_size==0 && num2_size==0){
        return 0;
    }
    if(num1_size ==0){
        for(i=0;i<num2_size;i++){
            printf("%d ",num2[i]);
        }    
    }
    if(num2_size ==0){
        for(i=0;i<num1_size;i++){
            printf("%d ",num1[i]);
        }    
    }
    if(i<num1_size && j<num2_size){
        while(i<num1_size && j<num2_size){
            if(num1[i]<=num2[j]){
                array[k]=num1[i];
                i++;
                k++;
            }
            else{
                array[i]=num2[j];
                j++;
                k++;
            }
        }
    }
    
    if(i>=num1_size || j>=num2_size){
        while(i>=num1_size && j<=num2_size){            
            array[k]=num2[j];
            j++;
            k++;
        }
        while(j>=num1_size && i<=num1_size){
            array[k]=num1[i];
            i++;
            k++;
        }
    }
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}