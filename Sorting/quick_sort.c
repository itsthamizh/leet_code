#include<stdio.h>

void quick_sort(int, int ,int);
int partition(int*, int, int);
void swap(int*, int*);
void display(int* array);

void main(){
    int array[8]={5,7,1,8,3,2,9,4};
    int l=0; int h=7;
    quick_sort(array,l,h);
    display(&array);
}

void quick_sort(int array, int l, int h){
    if(l<h){
        int mac;
        mac=partition(&array,l,h);
        partition(&array,l,mac);
        partition(&array,mac+1,h);
    }
}
int partition(int* array, int l, int h){
    int pivot=l;
    int i,j;
    i=l;
    j=h;

    while(i<j){
        while(array[i] <= pivot){
            i++;
        }
        while(array[j] > pivot){
            j--;
        }
        if(i < j){
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[l],&array[j]);
    return j;
}
void swap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
void display(int* array){
    int i;
    for(i=0;i<8;i++){
        printf("%d ",array[i]);
    }
}