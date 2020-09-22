#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* l1_list(struct ListNode*, int);
struct ListNode* l2_list(struct ListNode*, int);


struct ListNode* mergeTwoLists(struct ListNode*, struct ListNode*);

void display(struct ListNode*);

void main(){
    struct ListNode* new;

    struct ListNode* l1;
    l1=NULL;
    
    struct ListNode* l2;
    l2=NULL;
    
    l1=l1_list(l1,1);
    l1_list(l1,2);
    l1_list(l1,4);
    l1_list(l1,8);
    l1_list(l1,9);
    
    l2=l2_list(l2,1);
    l2_list(l2,3);
    l2_list(l2,4);
    l2_list(l2,7);
    l2_list(l2,7);
    
    new=mergeTwoLists(l1,l2);

    display(new);
}


//list one creation

struct ListNode* l1_list(struct ListNode* head, int data){
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

//list two creation

struct ListNode* l2_list(struct ListNode* head, int data){
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

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
   
        if(l1 == NULL)
            return l2;
    
        if(l2 == NULL)
            return l1;
    
        
        if(l1->val < l2->val ) {
            
            l1->next = mergeTwoLists(l1->next,l2);
            return l1;
        }
        else {
            l2->next = mergeTwoLists(l1,l2->next);
            return l2;
        }

}

void display(struct ListNode* head){
    while(head != NULL){
        printf("%d->",head->val);
        head=head->next;
    }
    printf("\n");
}