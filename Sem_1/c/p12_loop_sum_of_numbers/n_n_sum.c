// n_n_sum.c WAP to print sum of 1+4+9+16+.....n
#include <stdio.h>
void main()
{
	int i,l,sum;
	i=1;
	sum=0;
	printf("\nEnter last no: ");
	scanf("%d",&l);
	while(i<=l)
	{
		sum=sum+(i*i);
		i++;
	}
	printf("\n%d is the total \n",sum);
}