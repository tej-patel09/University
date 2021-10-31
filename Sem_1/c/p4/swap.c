#include <stdio.h>
void main()
{
	int a,b;
	printf("Enter a number ");
	scanf("%d",&a);
	printf("Enter b number ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a no. %d\n ",a );
	printf("b no %d\n ",b );
}