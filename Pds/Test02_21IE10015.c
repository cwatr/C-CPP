/************************************
* Name : Eisha Singh
* Roll No : 21IE10015
* Section : 1
* Group: 5 
* Test 2
* Description : functions and recursion
* Date : 25-05-2022
* ************************************/
#include<stdio.h>

int A[10000], B[10000], C[10000], D[1000];

//question 1 to input A and B
void readlist(int A[], int B[], int n, int m)
{
	int i, j;
	printf("Enter A :");
	for(i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
	printf("Enter B ");
	for(i=0;i<m;i++)
	{
		scanf("%d", &B[i]);
	}
}

//question 2 to print A and B
void printlist(int A[], int B[], int n,int m)
{
	int i;
	printf("\n\nList A:\n<");
	for(i=0;i<n;i++)
	{
		printf("%d ", A[i]);
	}
	printf(">\n");
	
	printf("List B:\n<");
	for(i=0;i<m;i++)
	{
		printf("%d ", B[i]);
	}
	printf(">\n");
	
}

//question 3 to search the whole B
int search(int A[], int B[], int C[],int n, int m)
{
	int i,j, k=0, count=0, flag=0, t=0,ans=0,ans1=0;
	
	for(i=0;i<n;i++)
	{
		if(A[i]==B[0])
		{
			ans=i;
			k=i;
			flag=0;
			for(j=0;j<m;j++)
			{
				if(A[k]!=B[j])
				{
					flag=1;
					break;
				}
				k++;
			}
			if(flag==0)
			{
				C[ans1]=ans;
				ans1++;
			}
		}
	}
	printf("No. of matches of B in A is %d", ans1);
	printf("\nThe indices are <");
	for(i=0;i<ans1;i++)
	{
		printf("%d ", C[i]+1);
	}
	printf(">");
	return flag;
}
 
 //question 4 to search in the subsequences
void recur(int A[],int B[],int D[],int C[],int n,int m,int k,int b)
{
	if(b==m)
	{
		if(k!=0)
		{
		printlist(A, D, n, k);	
		search(A, D, C, n, k);
		}
		return ;	
	}
	recur(A,B,D,C,n,m,k,b+1);
	D[k]=B[b];
	recur(A,B,D,C,n,m,k+1,b+1);
	return ;
}

int main()
{
	int n, m, s, k, j, e, r, i;
	printf("Enter a positive integer n ");
	scanf("%d", &n);
	printf("Enter a positive integer m less than n ");
	scanf("%d", &m);
	readlist(A, B, n, m);
	printlist(A, B, n, m);
	search(A, B, C, n, m);
	

	recur(A,B,D,C,n,m,0,0);
	
	
	return 0;
}


















