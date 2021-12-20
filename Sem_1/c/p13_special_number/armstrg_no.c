// armstrg_no.c WAP to check whether the given number is Armstrong or not
#include <stdio.h>
#include <math.h>
void main()
{
	int i,num,rev=0,n,pw;

	printf("Enter the number of digits in the number ");
	scanf("%d",&pw);

	printf("Enter the number ");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		i=num%10;
		rev=rev+(pow(i,pw));
		num=num/10;
	}
	if(n==rev)
	{
		printf("The no is Armstrong");
	}
	else
	{
		printf("The no isnt Armstrong \n");
	}
}