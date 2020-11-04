#include<stdio.h>
#define Queue_size 10
/*
void enqueue(int, int, int*, int*);
void dequeue(int, int*, int*);
void display(int, int*);
*/
void main(){
    int queue[Queue_size];
    int front=-1, rear=-1;
 
    enqueue(queue, 2, &rear, &front);
    enqueue(queue, 4, &rear, &front);
    enqueue(queue, 6, &rear, &front);

    display(queue, &front, &rear);

    dequeue(queue, &rear, &front);

    display(queue, &front, &rear);
}


void enqueue(int queue[Queue_size], int item, int*rear, int* front){
    if((*front == 0 && *rear == Queue_size-1) || (*front == *rear+1)){
        printf("Queue Overflow \n");
        return;
    }
    
    if(*front == -1){
        *front = 0;
        *rear = 0;
    }
    
    else{
        if(*rear == Queue_size-1)
            *rear = 0;
        else
            *rear = *rear+1;
    }
    queue[*rear] = item ;
}

void dequeue(int queue[Queue_size], int* front, int* rear){
    if(*front == -1){
        printf("Queue Underflow\n");
        return;
    }
    //printf("Element deleted from queue is : %d\n",queue[*front]);
    
    if(*front == *rear){
        *front = -1;
        *rear=-1;
    }
    else{
        if(*front == Queue_size-1)
            *front = 0;
        else
            *front = *front+1;
    }
}

void display(int queue[Queue_size], int* front, int* rear){
    int front_pos = *front, rear_pos = *rear;
    if(*front == -1){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements :\n");
    if( front_pos <= rear_pos )
        while(front_pos <= rear_pos){
            printf("%d ",queue[front_pos]);
            front_pos++;
        }
    else{
        while(front_pos <= Queue_size-1){
            printf("%d ",queue[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        
        while(front_pos <= rear_pos){
            printf("%d ",queue[front_pos]);
            front_pos++;
        }
    }
printf("\n");
}