#include <stdio.h>
void main()
{
	int a,c,e,f,g;
	printf("\nEnter days ");
	scanf("%d",&a);
	c=a/365;
	e=a%365;

	g=e/7;
	f=e%7;

	printf("\n %d years %d weeks %d days \n",c,g,f);
}