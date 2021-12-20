// div_by_2.c Program to print no divisible by 2 and not divisible by 3 btw 2 user defined inputs
#include <stdio.h>
void main()
{
	int i,l;
	
	printf("\nEnter first no:");
	scanf("%d",&i);
	
	printf("\nEnter last no:");
	scanf("%d",&l);
	
	while(i<=l)
	{
		if(i%2==0 && i%3!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}