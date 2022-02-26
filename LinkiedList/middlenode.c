#include<stdio.h>
#include<stdlib.h>
struct ListNode {
     int val;
      struct ListNode *next;
  };

int main()
{
    int i, n, len=0;
    struct ListNode *head, *help, *p;
    printf("Enter a number ");
    scanf("%d", &n);
    head=(ListNode*)malloc(sizeof(ListNode));
    help=(ListNode*)malloc(sizeof(ListNode));
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
    while(head)
    {
       len++;
       head=head->next;  
    }

    printf("\n len = %d", len);
    head=help;
    if(len%2==1)
    {
    for(i=0;i<(len-1)/2;i++)
    {
        head=head->next;
    }
    p=head;
    for(i=0;i<(len+1)/2;i++)
    {
        printf("\n%d", p->val);
        p=p->next;
    }
    }
    else
    {
         for(i=0;i<len/2;i++)
    {
        head=head->next;
    }
        p=head;

        for(i=0;i<(len/2);i++)
    {
        printf("\n%d", p->val);
        p=p->next;
    }
    }
       

    return 0;
    



}