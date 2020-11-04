#include<stdio.h>
#include<stdlib.h>
struct ListNode{
    int val;
    struct ListNode* next;
};

struct ListNode* enqueue(struct ListNode*, int);
void display(struct ListNode*);
struct ListNode* dequeue(struct ListNode*);

void main(){
    struct ListNode* head;
    struct ListNode* head_copy;

    head=enqueue(head,2);
    enqueue(head,4);
    enqueue(head,6);

    display(head);
    printf("\n\n");

    head=dequeue(head);

    display(head);
}

struct ListNode* enqueue(struct ListNode* head, int value){
    if(head==NULL){
        struct ListNode* temp;
        temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=value;
        temp->next=NULL;
        head=temp;
    }
    else{
        while(head->next!=NULL){
            head=head->next;
        }
        struct ListNode* temp;
        temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=value;
        temp->next=NULL;
        head->next=temp;
    }
    return head;
}

void display(struct ListNode* head){
    while(head!=NULL){
        printf("%d ",head->val);
        head=head->next;
    }
}

struct ListNode* dequeue(struct ListNode* head){
    if(head==NULL){
        printf("Queue is Underflow");
    }
    else{
        head=head->next;
    }
    return head;
}