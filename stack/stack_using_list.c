#include <stdio.h>
#include <stdlib.h>


struct Node
{
  int val;
  struct Node* next;
};

struct Node* push(struct Node*,int);
struct Node* pop(struct Node*);
void display(struct Node*);

void main(){
  struct Node* head;

  head=push(head,1);
  head=push(head,2);
  head=push(head,3);
  head=push(head,4);
  head=push(head,5);
  
  display(head);
  
  head=pop(head);
  head=pop(head);
  head=pop(head);
  head=pop(head);

  display(head);

}

struct Node* push(struct Node* head, int value){
    if(head==NULL){
      struct Node* l;
      l=(struct Node*)malloc(sizeof(struct Node));
      l->val=value;
      l->next=NULL;
      head=l;
    }
    else{
      struct Node* l;
      l=(struct Node*)malloc(sizeof(struct Node));
      l->val=value;
      l->next=head;
      head=l;
    }
    return head;
}

struct Node* pop(struct Node* head){
  if(head!=NULL){
    head=head->next; 
  }
  else{
    printf("\033[0;31m");
    printf("ERROR: Stack Underflow\n");
    printf("\033[0m");
  }
  return head;
}

void display(struct Node* head){
   while (head != NULL){
        printf("%d\t",head->val);
        head=head->next;
    }
        printf("\n");
}