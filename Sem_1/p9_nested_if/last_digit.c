// last_digit.c Check last digit is even or odd
#include<stdio.h>
void main()
{
	int s1,s2,s3;
	float b,c,g,h,i;
	 printf("\nenter any number ");
	 scanf("%d",&s1);
// b = hundrends place
	 b=s1/100; 
	 c=s1-(b*100);
// i = tens place
	 s2=c;
	 i=s2/10;
// g = ones place
	 g=s2-(i*10);
	 s3=g;

	 if(s3%2 == 0)
	 {
	 	printf("\nlast number is even %d \n",s3);
	 }
	 else
	 {
	 	printf("\nnumber is odd %d \n",s3);
	 }
}