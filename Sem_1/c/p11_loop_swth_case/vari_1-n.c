// vari_1-n.c Program to write 1 to n user input
#include <stdio.h>
void main()
{
	int i,l;
	i=1;
	printf("\nEnter last no:");
	scanf("%d",&l);
	while(i<=l)
	{
		printf("%d\n",i);
		i++;
	}
}