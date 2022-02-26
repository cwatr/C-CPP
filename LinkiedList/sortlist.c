#include<stdio.h>
#include<stdlib.h>

struct ListNode {
     int val;
      struct ListNode *next;
  };

int main()
{
    int i, n, min=-1 ;
    struct ListNode *head1, *help1, *head2, *help2, *p, *help3;
    printf("Enter a number ");
    scanf("%d", &n);
    head1=(ListNode*)malloc(sizeof(ListNode));
    help1=(ListNode*)malloc(sizeof(ListNode));
   head2=(ListNode*)malloc(sizeof(ListNode));
    help2=(ListNode*)malloc(sizeof(ListNode));
    p=(ListNode*)malloc(sizeof(ListNode));
    printf("For head1 \n");
    scanf("%d", &head1->val);
    
    help1=head1;
    for(i=0;i<n-1;i++)
    {
        head1->next=(ListNode*)malloc(sizeof(ListNode));
        head1=head1->next;
        scanf("%d", &head1->val);
        
    }
    head1=help1;
     printf("For head2 \n");
    scanf("%d", &head2->val);
    
    help2=head2;
    for(i=0;i<n-1;i++)
    {
        head2->next=(ListNode*)malloc(sizeof(ListNode));
        head2=head2->next;
        scanf("%d", &head2->val);
        
    }
    printf("1a");
    head2=help2;
     if(head1->val<=head2->val)
    {
        min=head1->val;
        p->val=head1->val;
        head1=head1->next;
    }
    else if(head2->val<head1->val)
    {
        min=head2->val;
        p->val=head2->val;
        head2=head2->next;
    }
    printf("head1-> ");
    help3=head1;
    while(help3)
    {
        printf("%d ",help3->val);
        help3=help3->next;
    }
    printf("\n");
    help3=head2;
    while(help3)
    {
        printf("%d ",help3->val);
        help3=help3->next;
    }
    help3=p;
    
    while(head1 && head2)
    {
        printf(" 3a1\n ");
        if(head1->val<=head2->val)
    {
        printf(" first loop");
        p->next=(ListNode*)malloc(sizeof(ListNode));
        p=p->next;
        p->val=head1->val;
        head1=head1->next;

    }

    else if(head2->val<=head1->val)
    {
        printf("  second loop");
        p->next=(ListNode*)malloc(sizeof(ListNode));
        p=p->next;
        p->val=head2->val;
        head2=head2->next;  
    }
    }
printf("3a");
    if(head1==NULL)
        p->next=head2;
    if(head2==NULL)
        p->next=head1;

    p=help3;
    while(p)
    {
        printf("\n%d", p->val);
        p=p->next;
    }
    
    return 0;
}
