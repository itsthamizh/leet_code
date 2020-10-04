#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct ListNode* right;
};

struct ListNode* creation(struct ListNode*, int);
void display(struct ListNode*);
struct TreeNode* convert(struct ListNode*);
void display(struct TreeNode*);

void main(){
    struct ListNode* head;
    
    head=creation(head,1);
    creation(head,2);
    creation(head,3);
    creation(head,4); 
    creation(head,5);

    display(head);

    struct TreeNode* header;

    header=convert(head);
    printf("\n");
    display(header);
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


void display(struct TreeNode* header){
    while(header!=NULL){
        printf("%d->",head->val);
        head=head->next;
    }
}
struct TreeNode* convert(struct ListNode* head){
    struct ListNode* head_copy;
    struct ListNode* current=head;
    struct ListNode* last=head->next;
    
    struct TreeNode* root;

    if(last!=NULL){
        while(last!=NULL){
            current=current->next;
            last=last->next->next;
        }
    }
    root->val=current->val;

    head=head_copy;

    while(head->next!=NULL){
        if(head->val<root){
            if(root->left==NULL){
                struct TreeNode* temp;
                temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
                temp->val=head->val;
                root->left=temp;
            }
            else{
                while(root->left!=NULL){
                    root->left=root->left->left;
                }
                struct TreeNode* temp;
                temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
                temp->val=head->val;
                root->left=temp;
            }
        }
        if(head->val<root){
            if(root->right==NULL){
                struct TreeNode* temp;
                temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
                temp->val=head->val;
                root->right=temp;
            }
            else{
                while(root->right!=NULL){
                    root->right=root->right->right;
                }
                struct TreeNode* temp;
                temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
                temp->val=head->val;
                root->right=temp;
            }
        }
        if(head==root){
            head=head->next;
        }
        head=head->next;
    }
    return root;
}