#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,n,j,flag=0;
    char ***items;
    char key[20];
    char val[20];
    printf("Enter a number ");
    scanf("%d", &n);
    printf("Enter key & val ");
    scanf("%s%s", &key, &val);
    items=(char***)malloc(n*sizeof(char));
    for(i=0;i<n;i++)
    {   items[i]=(char**)malloc(3*sizeof(char));
        printf("Enter item in format of type, color, name ");
        for(j=0;j<3;j++)
        {
            items[i][j]=(char*)malloc(20*sizeof(char));
            scanf("%s", &items[i][j]);
        }
    }
   
    
        if(key=="type")
        {
            for(j=0;j<n;j++)
            {
                if(strcmp(items[j][1],val)==0)
                {flag=flag+1;}
            }
        }
         if(key=="color")
        {
            for(j=0;j<n;j++)
            {
                if(strcmp(items[j][2],val)==0)
                {flag=flag+1;}
            }
        }
         if(key=="name")
        {
            for(j=0;j<n;j++)
            {
                if(strcmp(items[j][3],val)==0)
                {flag=flag+1;}
            }
        }
    

    printf("%d", flag);
    return 0;


}