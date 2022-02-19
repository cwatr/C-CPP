#include<stdio.h>
#include<stdlib.h>

int power(int x)
{   int i, p=1;
    for(i=0;i<x;i++)
    {
        p=p*2;
    }
    return p;
}

struct ListNode {
     int val;
     struct ListNode *next;
  };

int main()
{
    int i, n, j, count=0, len=0;
    struct ListNode *head,*help;
    int *value;
    printf("Enter a number ");
    scanf("%d", &n);
    value = (int*)malloc(n*sizeof(int));
    head=(ListNode*)malloc(sizeof(ListNode));
    scanf("%d",&head->val);
    help=head;

    for(i=0;i<n-1;i++)
    {
        head->next=(ListNode*)malloc(sizeof(ListNode));
        head=head->next; 
        scanf("%d", &head->val); 
    }
    head->next=NULL;
    head=help;
    while(head)
    {
        len++;
        head=head->next;
        printf("\nlen= %d", len);
    }
    printf("\nLength = %d", len);
    head=help;
     while(head)
     {
         count=count+power(len-1)*head->val;
         head=head->next;
         len--;
     }
     printf("\n%d", count);
     return 0;
}     
