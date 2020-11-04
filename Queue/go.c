#include<stdio.h>
#define Queue_size 5
void main(){
    int queue[Queue_size]={};
    int front=-1, rear=-1;
    int k=3;

    enqueue(queue, 2, &rear);
    enqueue(queue, -1, &rear);
    enqueue(queue, 2, &rear);
    enqueue(queue, 1, &rear);
    
    display(queue, &front, &rear);
    printf("\n\n");

    least_k(queue, k, &front);
}

void enqueue(int queue[Queue_size], int val, int *rear){
    *rear=*rear+1;

    if(*rear>Queue_size){
        printf("Queue is Overflow");
        *rear=*rear-1;
    }
    else{
        queue[*rear]=val;
    }
}


void display(int queue[Queue_size], int* front, int* rear){
    int i;
    for(i=*front+1;i <= *rear;i++){
        printf("%d ",queue[i]);
    }
}

void least_k(int queue[Queue_size], int k, int* front){
    int val;
    int i=0,j=0,l=0;
    int storing[10]={};
    while(l<4){
        val=0;
        for(i=l;i<4;i++){
            val=queue[i]+val;
            
            if(val==k){ 
                storing[j]=i+1;
                j++;
            }
        }
        l++;
    }
    int m,opp=0;
    for(m=0;m<j;m++){
        if(opp==0){
            opp=storing[m];
        }
        else{
            if(opp>storing[m]){
                opp=storing[m];
            }
        }
    }

    printf("\n\n %d\n",opp);
}