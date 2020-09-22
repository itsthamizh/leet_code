/* this program for given singly linked lists are swap nodes in pair 

input: 1 2 3 4 5 6
output :2 1 4 3 6 5 

*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

struct ListNode* list_create(struct ListNode*,int);
struct ListNode* swapPairs (struct ListNode*);
void display(struct ListNode*);

void main(){
    struct ListNode* head;

    head=list_create(head,1);
    list_create(head,2);
    list_create(head,3);
    list_create(head,4);
    list_create(head,5);
    list_create(head,6);

    printf("\n");

    display(head);

    head=swapPairs(head);

    printf("\n");

    display(head);
}

struct ListNode* list_create(struct ListNode* head, int data){
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

struct ListNode* swapPairs(struct ListNode* head){
     struct ListNode *next;
    struct ListNode *temp;
    
    if(head == NULL || head->next == NULL)
        return head;

    next = head->next->next;
    
    temp = head->next;
    head->next->next = head;
    head->next = swapPairs(next);
    
    return temp;
    
}

void display(struct ListNode* head){
    while(head!=NULL){
        printf("%d->",head->val);
        head=head->next;
    }
}