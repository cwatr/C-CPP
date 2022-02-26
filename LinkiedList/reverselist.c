#include<stdio.h>
#include<stdlib.h>

struct ListNode {
     int val;
     struct ListNode *next;
  };

int main()
{
    int i, j, n, len=0, count=0;
    struct ListNode *head, *help, *c, *p, *f;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("n = %d\n",n);
    head=(ListNode*)malloc(sizeof(ListNode));
    
    for(i=0;i<n;i++)
    { 
        head=(ListNode*)malloc(sizeof(ListNode));
        scanf("%d", &head->val);
        if(i!=0)p->next=head;
        printf("head->val = %d for i = %d\n",head->val,i);
        if(i==0)help = head;
        p=head;
        head=head->next;    
    }
    head->next=NULL;
    head=help;
    c=help;
    f=head->next;
    p=NULL;
while(c)
    {
        printf("%d-df->", c->val);
        c=c->next;
    }
    c=head;
 while(f)
 {
    c->next=p;
    p=c;
    c=f;
    f=f->next;
 }  
 printf("\n");
    c->next=p;
    while(c)
    {
        printf("%d-->", c->val);
        c=c->next;
    }
    return 0;

    









}