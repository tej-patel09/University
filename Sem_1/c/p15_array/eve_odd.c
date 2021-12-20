// eve_odd.c WAP to count number of even or odd number from an array of n numbers

#include<stdio.h>
void main()
{
	int a[4],i,eve=0,odd=0;
	
	printf("Enter no one by one \n");
	for(i=0; i<=3; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
	    	eve++;
		else
	    	odd++;
	}
	printf("No of even int are %d and odd are %d",eve,odd);
}