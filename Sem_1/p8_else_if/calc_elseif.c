#include <stdio.h>
void main()
{
	int a,b,c;
	float d;
	 printf("\nenter the numbers ");
	 scanf("%d",&a);

	 printf("\nenter other numbers ");
	 scanf("%d",&b);

	 printf("\nenter \n1 for addition \n 2 for subs \n 3 for multi \n 4 for divi \n");
	 scanf("%d",&c);

	 if(c==1)
	 {
	 	d=a+b;
	 	printf("\n %f addition is  \n",d);
	 }
	 else if(c==2)
	 {
	 	d=a-b;
	 	printf("%f subs is  \n",d);
	 }
	 else if(c==3)
	 {
	 	d=a*b;
	 	printf("%f multi is  \n",d);
	 }
	 else if(c==4)
	 {
	 	d=a/b;
	 	printf("%f division is  \n",d);
	 }
	 else
	 {
	 	printf("Please enter prorper value\n");
	 }
	
}