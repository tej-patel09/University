// mutli_lrg2.c Program to multiply largest from first two into third
#include <stdio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter three no \n");
	scanf("%d %d %d",&n1,&n2,&n3);

	(n1>n2)
	?
		(printf("%d \n",n1*n3))
	:
		(printf("%d \n",n2*n3))
	 ;
}
