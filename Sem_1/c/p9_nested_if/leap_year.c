// leap_year.c 
#include<stdio.h>
void main()
{
	int s1;
	 printf("\nenter the year ");
	 scanf("%d",&s1);

	 if(s1%4==0 && s1%100!=0 )
	 {
		printf("The year is leap year");			
	 }
	 else if(s1%400==0)
	 {
		printf("The year is leap year \n");
	 }
	 else
	 {
	 	printf("The year is normal");
	 }
}