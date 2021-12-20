// prfct_no.c WAP to check whether the given number is perfect or not
// 1, 2, 3, 6, 28, 496, 8128 are perfect 6's factors are 1,2,3 and 1+2+3=6..........
#include <stdio.h>
void main()
{
	int i=1,num,sum=0;

	printf("Enter the number ");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==num)
		printf("The no %d is perfect",num);
	else
		printf("The no %d is not perfect",num);
}