#include<stdio.h>
#include<stdlib.h>

struct ListNode {
     int val;
     struct ListNode *next;
 };


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

    struct ListNode* sum=NULL, *newnode, *ptr;
    u_int8_t carry = 0;
    while(l1->next!=NULL) {
        newnode = malloc(sizeof(struct ListNode*));
        if(l1->val + l2->val >9)
            carry = 1;
        else
            carry = 0;
        newnode->val = l1->val%10 + l2->val%10 + carry;
        if(sum==NULL) {
            newnode = NULL;
            sum = newnode;
        }
        else {
            ptr = sum;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next = newnode;
            newnode->next = NULL;
        }
    }
    
    return sum;
}
int main() {
    struct ListNode *l1=NULL, *l2=NULL, *newnode=NULL, *ptr, *result=malloc(sizeof(struct ListNode));
    for(int i=0;i<3;i++) {
        newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val = 2;
        if(l1==NULL) {
            newnode = NULL;
            l1 = newnode;
        }
        else
        {
            ptr = l1;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=newnode;
            newnode->next=NULL;
        }
    }
    for(int i=0;i<3;i++) {
        newnode = malloc(sizeof(struct ListNode));
        newnode->val = 5;
        if(l2==NULL) {
            newnode = NULL;
            l2 = newnode;
        }
        else
        {
            ptr = l2;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=newnode;
            newnode->next=NULL;
        }
    }
    // result = addTwoNumbers(l1,l2);
    // while(l1->next!=NULL) {
    //     printf("%d",l1->val);
    //     l1=l1->next;
    // }
    printf("%d",l2->val);

    return 0;
}