#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, i, n, k;
    printf("Enter a number ");
    scanf("%d", &n);
      p=(int*)malloc(n*sizeof(int));
    printf("Enter array ");
    for(i=0;i<n;i++){
      
        scanf("%d", &p[i]);
    }
    printf("Enter number to be identified ");
    scanf("%d", &k);
    for(i=0;i<n;i++)
    {
        if(p[i]==k)
        {
            printf("\nidentified");
        }
        else if(p[i]!=k)
        {
            printf("\nnot equivalent");
        }
    }
    return 0;
}