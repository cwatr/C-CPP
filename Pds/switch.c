#include<stdio.h>
int main()
{
	char s;

	switch(s=getch())
	{
		case 'r': 
		case 'R': printf("Red");
				  break;
		case 'b': 
		case 'B': printf("Blue");
				  break;
		case 'g': 
		case 'G': printf("Green");
				  break;
		default: printf("Black");
				 break;		  			   	 
	}
	
	return 0;
}
