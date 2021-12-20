//Calculating Basic Salary using else if  
#include<stdio.h>
void main()
{
	int a;
	float b,c,g;
	 printf("\nenter basic salary ");
	 scanf("%d",&a);
	 if(a<10000)
	 {
	 	printf("Please enter proper salary\n");
	 }

	 else if(a<20000)
	 {
	 	if(a>=10000)
	 	{
	 		c=a*(80.0/100.0);
		 	b=a*(20.0/100.0);
		 	g=b+a+c;
		 	printf("%f = gross salary \n",g);		
	 	}
	}
	 else if(a<30000)
	 {
	 	if(a>=20000)
		{
		 	c=a*(90.0/100.0);
		 	b=a*(25.0/100.0);
		 	g=b+a+c;
		 	printf("%f = gross salary \n",g);
	 	}
	 }
	 else
	 {	
		 if(a>=30000)
		 {
		 	c=a*(95.0/100.0);
		 	b=a*(30.0/100.0);
		 	g=b+a+c;
		 	printf("%f = gross salary \n",g);
		 }
	} 
}