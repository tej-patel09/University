#include <stdio.h>
#include <math.h>
void main()
{
	int a,b,c;
	float d,x,y,sq;
	printf("\nenter a ");
	scanf("%d",&a);

	printf("\nenter b ");
	scanf("%d",&b);

	printf("\nenter c ");
	scanf("%d",&c);

	d=(b*b)-(4.0*a*c);
	sq=sqrt(d);
	 if(d>0)
	 {
	 	x=((-b)+sq)/(2*a);
	 	y=(-b)-sq;
	 	printf("\n %f and %f are the roots of eq \n ",x,y);
	 }
	 if(d==0)
	 {
	 	x=((-b)+sq)/(2*a);
	 	printf("\n %f both roots are same \n ",x);
	 }
	 if(d<0)
	 {
	 	printf("\n no real roots");
	 }
}