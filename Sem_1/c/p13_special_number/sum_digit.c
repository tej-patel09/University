// sum_digit.c WAP to print sum of digits of given number

#include <stdio.h>
void main()
{
	int num,i,sum=0;

	printf("Enter the number ");
	scanf("%d",&num);

	while(num>0)
	{
		i=num%10;
		sum=sum+i;
		
		num=num/10;
	}
	printf("%d is the sum\n",sum);
}