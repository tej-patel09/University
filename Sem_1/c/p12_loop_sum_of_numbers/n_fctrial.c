// n_fctrial.c WAP to find factorial of the given number
#include <stdio.h>
void main()
{
	int fac,i=1,mul=1;
	printf("Enter the number for factorial ");
	scanf("%d",&fac);
	while(i<=fac)
	{
		mul=mul*i;
		i++;
	}
	printf("%d is the factorial of %d",mul,fac);
}