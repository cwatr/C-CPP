#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode *next;
}

int main()
{
    int i, n;
    struct ListNode *head, *help, *p, *node;
    printf("Enter a number ");
    scanf("%d", &n);
    head=(ListNode*)malloc(sizeof(ListNode));
    help=(ListNode*)malloc(sizeof(ListNode));
    node=(ListNode*)malloc(sizeof(ListNode));
    p=(ListNode*)malloc(sizeof(ListNode));
    scanf("%d", &head->val);
    printf("head->val= %d for i= 0", head->val);
    help=head;
    for(i=0;i<n-1;i++)
    {
        head->next=(ListNode*)malloc(sizeof(ListNode));
        head=head->next;
        scanf("%d", &head->val);
        printf("head->val= %d for i= %d", head->val, i+1);
    }

    head->next=NULL;
    head=help;
    printf("Enter node");
    scanf("%d", &node->val);
 








}