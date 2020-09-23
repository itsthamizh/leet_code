/* 
this program for k values of pairs nodes are reverse orderlt arranging

example for,
    input :1 2 3 4 5 6
        input for k= 2
    output:2 1 4 3 5 6

    here two pairs are changed by reverse order.
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
    //creation(head,6);

    display(head);

    head=reverse(head,2);

    printf("\n\n");

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
    if(head==NULL || head->next==NULL){
        return head;
    }
    if(head!=NULL && k != NULL){
        k--;
        struct ListNode* prev;
        struct ListNode* curr;
        curr=head->next->next;

        struct ListNode* temp;
        temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=head->val;
        temp->next=NULL;
        head=head->next;
        head->next=temp;
        temp->next=reverse(curr,k);
        temp=curr;
    }
    return head;
}