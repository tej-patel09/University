#include<stdio.h>
void main()
{
	int a;
	float b,c,g;
	 printf("\nenter basic salary ");
	 scanf("%d",&a);

	 if(a>=10000 && a<20000)
	 {
	 	c=a*(80.0/100.0);
	 	b=a*(20.0/100.0);
	 	g=b+a+c;
	 	printf("%f = gross salary \n",g);
	 }
	  if(a>=20000 && a<30000)
	 {
	 	c=a*(90.0/100.0);
	 	b=a*(25.0/100.0);
	 	g=b+a+c;
	 	printf("%f = gross salary \n",g);
	 }
	  if(a>=30000)
	 {
	 	c=a*(95.0/100.0);
	 	b=a*(30.0/100.0);
	 	g=b+a+c;
	 	printf("%f = gross salary \n",g);
	 }
	
	 
}