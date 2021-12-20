// dig_num.c WAP to print digits of given number
#include <stdio.h>
void main()
{
	int num,i;

	printf("Enter the number ");
	scanf("%d",&num);

	while(num>0)
	{
		i=num%10;
		printf("%d\n",i);
		num=num/10;
	}
}