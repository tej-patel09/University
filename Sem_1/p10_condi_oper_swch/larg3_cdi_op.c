// larg3_cdi_op.c Program to check largest from three nos. using conditional operator
#include <stdio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter three no \n ");
	scanf("%d %d %d",&n1,&n2,&n3);

	(n1>n2)
	?
		((n1>n3)
		?
			(printf("%d is largest \n",n1 ))
		:
			(printf("%d is largest \n",n3 )))
	:
		((n2>n3)
		?
			(printf("%d is largest \n",n2 ))
		:	
			(printf("%d is largest \n",n3 )))
	;
}
