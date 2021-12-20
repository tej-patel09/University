// odd_1_n.c Program to write odd no btw 1 - n user defined
#include <stdio.h>
void main()
{
	int i,l;
	i=1;
	printf("\nEnter last no:");
	scanf("%d",&l);
	while(i<=l)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}