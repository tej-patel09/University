#include <stdio.h>
void main()
{
	int a,b,c;
	printf("\n A number ");
	scanf("%d",&a);

	printf("\n B number ");
	scanf("%d",&b);

	printf("\n C number ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n The number A is greatest \n");
		}
		else
		{
			printf("\n The number C is greatest \n");
		}
			
	}
	else
	{
		if(b>c)
		{
			printf("\n The number B is greatest \n");
		}
		else
		{
			printf("\n The number C is greatest \n");
		}
	}
	
}