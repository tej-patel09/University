// sm_avg_of_n.c to find the sum and average of different numbers as many as user wants
#include <stdio.h>
void main()
{
	int n,num,i=1,sum=0;
	float avg;
	printf("Enter how many no. to insert \n");
	scanf("%d",&n);

	printf("Insert the numbers one by one \n");
	while(i<=n)
	{
		scanf("%d",&num);
		sum=sum+num;
		i++;
	}
	avg = sum/n;
	printf("Avg of %d enterned no is %f and sum is %d\n",n,avg,sum );
}