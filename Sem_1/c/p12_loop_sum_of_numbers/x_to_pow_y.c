// x_to_pow_y.c WAP to calculate x^y without using power function
#include <stdio.h>
void main()
{
	int bse,pow,i=1,mul=1;
	printf("enter the base ");
    scanf("%d",&bse);

    printf("enter the power ");
    scanf("%d",&pow);
    while(i<=pow)
    {
    	mul = mul*bse;
    	i++;
    }
    printf("%d is the ans \n",mul);
}