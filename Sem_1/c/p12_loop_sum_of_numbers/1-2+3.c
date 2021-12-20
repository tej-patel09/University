// 1-2+3.c WAP to print 1-2+3-4
#include <stdio.h>
void main()
{
	int i=1,l,sum=0;
	printf("Enter last number ");
	scanf("%d",&l);
	while(i<=l)
	{
		if(i%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	printf("%d is the sum",sum);
}