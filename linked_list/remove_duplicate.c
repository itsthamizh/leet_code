/*
this program for remove the duplicate nodes in the given lists

example for:
    input : 1 2 2 3 4 4 5
    output: 1 3 5
    
*/
#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

struct ListNode* creation(struct ListNode*, int); 
void display(struct ListNode*);
struct ListNode* remove_duplicate(struct ListNode*);

void main(){
    struct ListNode* head;

    head=creation(head,1);
    creation(head,2);
    creation(head,2);
    creation(head,3);
    creation(head,4);
    creation(head,4);
    creation(head,5);
    creation(head,5);
    creation(head,6);

    display(head);

    head=remove_duplicate(head);
    printf("\n \n");
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

struct ListNode* remove_duplicate(struct ListNode* head){
    struct ListNode* temp;
    struct ListNode* temp_copy;
    temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    while(head!=NULL){
    if(head->val==head->next->val){
        while(head->val==head->next->val){
            head=head->next;
        }
        head=head->next;
    }
    if(head->next==NULL){
        while(temp->next!=NULL){
                temp=temp->next;
            }
            struct ListNode* mac;
            mac=(struct ListNode*)malloc(sizeof(struct ListNode));
            mac->val=head->val;
            mac->next=NULL;
            temp->next=mac;

            head=head->next;
            temp=temp_copy;
    }
    if(head!=NULL && head->val!=head->next->val){
        if(temp->val==NULL){
            temp->val=head->val;
            temp->next=NULL;
            temp_copy=temp;
        }
        else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            struct ListNode* mac;
            mac=(struct ListNode*)malloc(sizeof(struct ListNode));
            mac->val=head->val;
            mac->next=NULL;
            temp->next=mac;
        }
        head=head->next;
       }
    }

    head=temp;
    return head;

}