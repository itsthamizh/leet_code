#include<stdio.h>

#define STACK_SIZE 1000

void push(int*, int*, int);
void display(int[], int);
void pop(int*, int*);

void main(){
  int stack[STACK_SIZE]; 
  int head = -1;

  push(stack,&head,1);
  push(stack,&head,2);
  push(stack,&head,3);
  push(stack,&head,4);
  push(stack,&head,5);
  push(stack,&head,6);
  push(stack,&head,7);
  push(stack,&head,8);
    push(stack,&head,9);
  push(stack,&head,10);
  push(stack,&head,11);
  push(stack,&head,12);

  display(stack, head);

  pop(stack,&head);
  pop(stack,&head);
  pop(stack,&head);

  display(stack, head);
}

void push(int* stack, int* head, int value){
    *head = *head + 1;
    if( *head > STACK_SIZE){
        printf("Stack is overflow\n");
        *head = *head - 1;
    }
    else{
        stack[*head]=value;
    }
}


void pop(int* stack,int* head){
    if(*head == -1){
        printf("Stack is Underflow");
    }
    else{
        int val = stack[*head];
        *head = *head - 1;
    }  
}

void display(int arrray[], int head) {
  for(int i = head; i >= 0; i--) {
    printf("%d \n", arrray[i]);
  }
  printf("\n");
}