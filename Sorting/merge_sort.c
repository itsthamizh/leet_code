#include<stdio.h>

void merge_sort(int*, int, int);
int merge(int*, int, int, int);
void display(int*);

void main(){
    int array[10]={5,1,9,8,4,6,2,7,3,0};
    int least=0, last=10-1;
    merge_sort(array,least,last);
    display(array);
}

void merge_sort(int* array, int least, int last){
    if(least<last){
        int mid=(least+last)/2;

        merge_sort(array,least,mid);
        merge_sort(array,mid+1,last);

        merge(array,least,mid,last);
    }
}

int merge(int* array, int least, int mid, int last){

    int i=least;
    int j=mid+1;
    int k=least;
    int b[10];
    

    while(i<=mid && j<=last){
        if(array[i] <= array[j]){
            b[k]= array[i];
            i++;
            k++;
        }
        else{
            b[k]= array[j];
            j++;
            k++;
        }
    }
    if(i>mid || k>last){
        if(i>mid){
            while(j<=last){
                b[k]=array[j];
                j++;
                k++;
            }
        }
        else{
            while(i<=mid){
                b[k]=array[i];
                i++;
                k++;
            }
        }
    }
    for(k=least;k<last;k++){
        array[k]=b[k];
    }
}

void display(int* array){
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }
}