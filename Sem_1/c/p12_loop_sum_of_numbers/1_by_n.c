// 1_by_n.c WAP to sum of series 1 + 1/2 + 1/3 + 1/4 + ⋯ + 1/n
#include <stdio.h>

void main() 
{
    int a,i=1;
    float sum=0.0;
    printf("enter last digit ");
    scanf("%d",&a);
    while(i<=a)
    {
       sum=sum+(1.0/i);
       i++;
    }
    printf("%f is the sum",sum);
}