#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i;

     int *arr;
     int *encode;
    printf("Enter a number ");
    scanf("%d", &n);
    arr=(int*)malloc(n*sizeof(int*));
    encode=(int*)malloc((n-1)*sizeof(int*));
    printf("Enter first arr ");
    scanf("%d", &arr[0]);
    for(i=0;i<n-1;i++)
    {
        scanf("%d", &encode[i]);        
    }
    for(i=0;i<n-1;i++)
    {
       printf("\n %d", encode[i]);        
    }
    
      for(i=0;i<n-1;i++)
    {
             encode[i]=arr[i]^arr[i+1];
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d", arr[i]);        
    }
    return 0;
    
    




}
