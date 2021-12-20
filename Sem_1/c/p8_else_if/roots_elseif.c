#include <stdio.h>
#include <math.h>
void main()
{
	float d,x,y,sq,r,a,b,c;
	printf("\nenter a ");
	scanf("%f",&a);

	printf("\nenter b ");
	scanf("%f",&b);

	printf("\nenter c ");
	scanf("%f",&c);

	d=(b*b)-(4.0*a*c);
	
	 if(d>0)
	 {
	 	sq=sqrt(d);
	 	x=((-b)+sq)/(2*a);
	 	y=((-b)-sq)/(2*a);
	 	printf("\n %f and %f are the roots of eq \n ",x,y);
	 }
	 else if(d==0)
	 {
	 	sq=sqrt(d);
	 	x=(-b)/(2*a);
	 	printf("\n %f both roots are same \n ",x);
	 }
	 else
	 {
	 	d=d*(-1.0);
	 	sq=sqrt(d);
	 	r=(-b)/(2.0*a);
	 	x=sq/(2.0*a);
	 	printf("\n no real roots -- imaginary roots are ---\n %f + %fi and \n %f - %fi \n",r,x,r,x);
	 }
}