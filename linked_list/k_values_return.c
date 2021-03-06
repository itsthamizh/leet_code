/*this problem for k values are modified to reverse order

example for:
    input :1 2 3 4 5
    input k value: 3

    output:3 2 1 4 5 

*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

struct ListNode* creation(struct ListNode*, int);
void display(struct ListNode*);
struct ListNode* reverse(struct ListNode*,int);

void main(){
    struct ListNode* head;
    
    head=creation(head,1);
    creation(head,2);
    creation(head,3);
    creation(head,4); 
    creation(head,5);

    display(head);

    head=reverse(head,2);
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

struct ListNode* reverse(struct ListNode* head, int k){
    struct ListNode* prev;
    struct ListNode* curr;
    struct ListNode* temp_prev;

    if(k==0 || head==NULL ){
        return head;
    }
    if(k!=0 || head!=NULL){

        prev=head;
        head=head->next;
        curr=head;

        prev->next=NULL;

        while(head->val != k+1 ){
            head=head->next;
            curr->next=prev;
            prev=curr;
            curr=head;
            if(head==NULL){
                break;
            }
        }
        temp_prev=prev;
        while(prev->next!=NULL){
            prev=prev->next;
        }
        prev->next=curr;
        prev=temp_prev;
    }
     
    head=prev;
    return head;
}