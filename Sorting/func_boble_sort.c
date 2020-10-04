/*
This program for solve the problem by ***Boble Sort*** 
for using array functions

*/

#include<stdio.h>

void boble_sort(int*, int);
void display(int*, int);

void main(){
    int n=5;
    int array[5]={5,4,6,3,7};
    boble_sort(array,n);
    display(array,n);
}
void boble_sort(int* array, int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(array[j] > array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void display(int* array, int n){
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
}