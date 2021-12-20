// nstd_lp_sm_1_1_2.c WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ ...+(1+2+3+4+....+n)

#include <stdio.h>
void main()
{
	int i,num,rev=0,j;

	printf("Enter the number ");
	scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            rev=rev+j;
        }
    }
    printf("Enter the number is %d",rev);
}