
/*This program for given singly linked lists are ordered by reverse
 
input:1 2 3 4 5 6 
output:6 5 4 3 2 1

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

    head=reverse(head,1);
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

struct ListNode* reverse(struct ListNode* head, int k){
    struct ListNode* prev;
    struct ListNode* cur;
    struct ListNode* prev_temp;
    
    if(head!=NULL){
        prev=head;
        head=head->next;
        cur=head;
    
        prev->next=NULL;
            while(k!=1){
                k--;
                head=head->next;
                cur->next=prev;
                prev=cur;
                cur=head;
            }
            prev_temp=prev;
            while(prev->next != NULL){
                prev=prev->next;
            }
        prev->next=head;
        prev=prev_temp;
        head=prev;
    }

    return head;
}