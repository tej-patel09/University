#include <stdio.h>
void main()
{
	int a,c,e,f,g;
	printf("\nEnter time in seconds ");
	scanf("%d",&a);
	c=a/3600;
	e=a%3600;

	g=e/60;
	f=e%60;
	
	printf("\n HH:MM:SS %d:%d:%d \n",c,g,f);
}