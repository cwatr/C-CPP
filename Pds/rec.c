#include<stdio.h>

void reverse(char s[], int i, int n){
	if(n==1) printf("%c", s);
	
	else 
	{
		i++;
		return reverse(s,i,n);
		printf("%c", s[i]);
	}
}


main () 
{ 
int x, i=0,n, k;
char s[10]="string";
n=10-1;
reverse(s, 0, n);



}
