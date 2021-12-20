#include<stdio.h>
void main()
{
	int a,b,c;
	 printf("\nenter the numbers ");
	 scanf("%d",&a);

	 printf("\nenter other numbers ");
	 scanf("%d",&b);

	 printf("\nenter other numbers ");
	 scanf("%d",&c);

	 if(a>b && a>c)
	 {
	 	printf("%d is largest number \n",a);
	 }
	 if(b>a && b>c)
	 {
	 	printf("%d is largest number \n",b);
	 }
	 if(c>b && c>a)
	 {
	 	printf("%d is largest number \n",c);
	 }
	 
}