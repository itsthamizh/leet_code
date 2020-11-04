#include<stdio.h>
#define Queue_size 10

void enqueue(int[], int, int*);
void dequeue(int[], int*, int*);
void display(int[], int*, int*);

void main(){
    int queue[Queue_size];
    int front=-1, rear=-1;
    
    enqueue(queue, 2, &rear);
    enqueue(queue, 4, &rear);
    enqueue(queue, 6, &rear);
    
    display(queue, &front, &rear);
    printf("\n\n");
    
    dequeue(queue, &front, &rear);
    dequeue(queue, &front, &rear);

    display(queue, &front, &rear);
}

void enqueue(int queue[Queue_size], int val, int* rear){
    *rear=*rear+1;
    if(*rear>Queue_size){
        printf("Queue is Overflow");
        *rear=*rear-1;
    }
    else{
        queue[*rear]=val;
    }
}

void dequeue(int queue[Queue_size], int* front, int* rear){
    if(*front > *rear){
        printf("Queue is Underflow");
    }
    else{
        *front=*front+1;
    }
}

void display(int queue[Queue_size], int* front, int* rear){
    int i;
    for(i=*front+1;i <= *rear;i++){
        printf("%d ",queue[i]);
    }
}