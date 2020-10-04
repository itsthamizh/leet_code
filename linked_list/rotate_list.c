
#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

struct ListNode* creation(struct ListNode*, int); 
void display(struct ListNode*);
struct ListNode* rotate(struct ListNode*,int);

void main(){
    struct ListNode* head;

    head=creation(head,1);
     creation(head,2);
    //  creation(head,3);
    //  creation(head,4);
    //  creation(head,5);

    display(head);

    head=rotate(head,2);

    printf("\n");

    display(head);
}

struct ListNode* creation(struct ListNode* head, int data){
     if(head==NULL){
        struct ListNode* temp;
        temp=NULL;
        temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=data;
        temp->next=NULL;
        head=temp;
        return head;
    }
    else{
        while(head->next != NULL){
            head=head->next;
        }
        struct ListNode* temp;
        temp=NULL;
        temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=data;
        temp->next=NULL;
        head->next=temp;
        return head;
    }
}


void display(struct ListNode* head){
    while(head!=NULL){
        printf("%d->",head->val);
        head=head->next;
    }
}

struct ListNode* rotate(struct ListNode* head,int k){
  while(k!=0){  
      k--;
    struct ListNode* temp;
    struct ListNode* head_copy;
    temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    head_copy=head;

    if(head->next ==NULL){
        return head;
    }
    if(head->next->next==NULL){
        temp->val=head->val;
        head=head->next;
        head->next=temp;
    } 
    if(head->next->next!=NULL){ 
        while(head->next->next != NULL){
            head=head->next;
        }
        temp->val=head->next->val;
        temp->next=NULL;
        head->next=NULL;
        //free(head);
        head=head_copy;
        temp->next=head;
        head=temp;
    }
  }
  return head;
}