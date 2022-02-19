#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    int *nums;
    char *s;
    char *sol;
    printf("Enter a number ");
    scanf("%d", &n);
    nums=(int*)malloc(n*sizeof(int));
    s=(char*)malloc(n*sizeof(char));
    sol=(char*)malloc(n*sizeof(char));
    printf("Enter nums ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);        
    }
    printf("Enter s ");
    for(i=0;i<n;i++)
    {
        scanf("%c", &s[i]); 
        printf("%d and %c \n",i,s[i]);       
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==nums[j])
            {
                sol[i]=s[j];
                printf("char= %c %c %d %d\n", sol[i],s[j],j,i);
            }
        }
    }
   for(i=0;i<n;i++)
   {
    printf("%c", sol[i]);
   }
   return 0;




}