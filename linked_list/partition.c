/*
This code for list partition of given lists and using tha integer x value to
solve the problem and display the output

Example for:
    input:1 4 3 2 5 2 
    output:1 2 2 4 3 5

*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

struct ListNode* creation(struct ListNode*, int);
void display(struct ListNode*);
struct ListNode* partition(struct ListNode*,int);

void main(){
    struct ListNode* head;
    
    head=creation(head,1);
    creation(head,4);
    creation(head,3);
    creation(head,2); 
    creation(head,5);
    creation(head,2);

    display(head);

    head=partition(head,3);
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

struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode* temp;
    struct ListNode* demo;
    struct ListNode* head_copy;
    struct ListNode* temp_copy;
    struct ListNode* demo_copy;
    head_copy=head;
    demo=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    while(head !=NULL){
        if(head->val<x){
            if(temp->val==NULL){
                temp->val=head->val;
                temp_copy=temp;
            }
            else{
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                struct ListNode* con;
                con=(struct ListNode*)malloc(sizeof(struct ListNode));
                con->val=head->val;
                con->next=NULL;
                temp->next=con;
            }
        }
        head=head->next;
    }

    head=head_copy;
    while(head != NULL){
        if(head->val >= x){
            if(demo->val==NULL){
                demo->val=head->val;
                demo_copy=demo;

            }
            else{
                while(demo->next!=NULL){
                    demo=demo->next;
                }
                struct ListNode* con;
                con=(struct ListNode*)malloc(sizeof(struct ListNode));
                con->val=head->val;
                con->next=NULL;
                demo->next=con;
            }
        }
        head=head->next;
    }
    demo=demo_copy;
    while(temp->next!=NULL){
            temp=temp->next;
    }
    temp->next=demo;
    temp=temp_copy;
    head=temp;
    return head;
}