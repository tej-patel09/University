// palindrom_num.c WAP to check whether the given number is palindrome or not

#include <stdio.h>
void main()
{
	int i,num,rev=0,n;

	printf("Enter the number ");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		i=num%10;
		rev=(rev*10)+i;

		num=num/10;
	}
	if(n==rev)
	{
		printf("The no is palindrome");
	}
	else
	{
		printf("The no isnt palindrome \n");
	}
}