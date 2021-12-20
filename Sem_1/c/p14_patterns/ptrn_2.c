// ptrn_1.c WAP to display following patterns
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 

#include <stdio.h>
void main()
{
	int i,j;

	for(i=0;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
		    printf("%d ",(i+j-1));
		}
		printf("\n");
	}
}