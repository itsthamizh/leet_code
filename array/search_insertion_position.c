#include<stdio.h>

int* search_position(int*, int);
void display(int);

void main(){
    int array[4]={1,3,5,6};
    int val=4;
    int position;
    position=search_position(&array,val);
    display(position);
}

int* search_position(int* array, int val){
    int i;
    for(i=0;i<4;i++){
        if(array[i]>=val){
            break;   
        }
    }
    return i;
}

void display(int val){
    printf("%d ",val);
}