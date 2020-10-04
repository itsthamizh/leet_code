/*
This program for plus one into the last index of the array

example for:
    input: [4,3,2,1]
    output:4322

*/


#include<stdio.h>

void main(){
    int array[4]={4,3,2,9};
    int size=sizeof array/sizeof array[0];
    int i;
    for(i=size-1;i>=0;i--){
        if(i==size-1){
            array[i]=array[i]+1;
        }
    }
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}






/*
int* plusone(int*,int);
void display(int*,int);
void main(){
    int array[3]={1,2,3};
    int size=sizeof array/sizeof array[0];
    int rearray[size];
    array=plusone(&array,size);
    display(&array,size);
}
int* plusone(int* array,int size){
    int i;
    for(i=size;i>=0;i--){
        if(i==size){
            array[i]=i+1;
        }
    }
    return &array;
}
void display(int* array,int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",array[i]);
    }
}
*/