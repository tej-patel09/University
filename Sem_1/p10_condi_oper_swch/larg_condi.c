// larg_condi.c Program to check largest from two nos. using conditional operator
#include <stdio.h>
void main()
{
	int n1,n2;
	printf("Enter two no \n ");
	scanf("%d %d",&n1,&n2);

	(n1>n2)
	?
		(printf("%d is largest \n",n1 ))
	:	
		(printf("%d is largest",n2 ))
	;
}