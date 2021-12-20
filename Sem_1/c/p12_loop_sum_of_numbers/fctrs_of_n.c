// fctrs_of_n.c WAP to find factors of the given number
#include <stdio.h>
void main()
{
	int fac,i=1;
	printf("Enter the no to find factors of ");
	scanf("%d",&fac);

	while(i<=fac)
	{
		if(fac == i)
		{
			printf("and %d are the factors of given number",i);
		}
		else if(fac%i==0)
		{
			printf("%d, ",i);
		}
		i++;
	}
}