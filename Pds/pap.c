#include<stdio.h>


int main()
{
	int i, j, count;
	char a[50], b[50], c[50];
	
scanf("%s%s%s", a, b, c);
 i  =  0; 
  count  =  0;
   while (a[i] != '\0')
 {
j = 0;
while (b[j] != '\0') {
if (a[i] != b[j])
 { j++;
continue;
  } 
else
   {
count++;
 break;
   }
}
 i++;
}
printf ("%d", count);
return 0;
}

6
