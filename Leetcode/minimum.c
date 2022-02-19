#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, flag=0;
    int *seat;
    int *stud;
   
    printf("Enter a number ");
    scanf("%d", &n);

    pos=(int*)malloc(n*sizeof(int));
    val=(int*)malloc(n*sizeof(int));
    
    printf("Enter seats ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &seat[i]);        
    }
    
    printf("Enter student positions ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &stud[i]);        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(stud[i]==seat[j])
            {
                flag=flag+0;
                stud[i]=0;
            }
            if(stud[i]>0)
            {
                for(k=0;k<n;k++)
                
            }
        }
    }





}    