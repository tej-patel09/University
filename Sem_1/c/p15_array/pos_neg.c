// pos_neg.c WAP to count number of positive or negative number from an array
// of n numbers

#include <stdio.h>
void main()
{
	int a[4],i,pos=0,neg=0;
	
	printf("Enter no one by one (upto 3 numbers) \n");
	for(i=0; i<=3; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
	    	neg++;
		else
	    	pos++;
	}
	printf("No of +ve int are %d and -ve are %d",pos,neg);
}