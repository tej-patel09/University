// switch_cal.c Program to perform operation as user choice
#include <stdio.h>
void main()
{
	int n1,n2;
	char op;
	printf("\nEnter the operation (a+b) \n");
	scanf("%d %c %d",&n1,&op,&n2);

	switch(op)
	{
		case '+':
			printf("%d addition is  \n",n1+n2);
			break;
		case '-':
			printf("%d subs is  \n",n1-n2);
			break;
		case '*':
			printf("%d multi is  \n",n1*n2);
			break;
		case '/':
			printf("%d division is  \n",n1/n2);
			break;
		default :
			printf("Choice error");
	}
}