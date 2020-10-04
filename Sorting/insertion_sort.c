/*
this program for ***Insertion Sort*** using array functuion method 
to solve the problems

*/

#include<stdio.h>

void insertion(int*);
void display(int*);

void main(){
    int array[6]={5,8,2,9,7,4};
    insertion(array);
    display(array);
}
void insertion(int* array){
    int i,j,temp;
    for(i=1;i<6;i++){
        temp=array[i];
        j=i-1;

        while(j>=0 && array[j]>temp){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
}
void display(int* array){
    for(int i=0;i<6;i++){
        printf("%d\n",array[i]);
    }
}