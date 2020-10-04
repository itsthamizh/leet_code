/*

This program for sorting the given elements as using for
***Selection Sort*** by array functions

*/

#include<stdio.h>

void selection(int*);
void display(int*);

void main(){
    int array[6]={5,3,8,6,9,2};

    selection(array);
    display(array);
}
void selection(int* array){
    int i,min,j,temp;
    for(i=0;i<5;i++){
        min=i;
        for(j=i+1;j<6;j++){
            if(array[j] < array[min]){
                min=j;
            }
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
}

void display(int* array){
    for(int i=0;i<6;i++){
        printf("%d\n",array[i]);
    }
}