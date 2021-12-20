#include<stdio.h>
void main()
{
	int s1,s2,s3;
	float b,c,g;
	 printf("\nenter first side ");
	 scanf("%d",&s1);

	 printf("\nenter second side ");
	 scanf("%d",&s2);

	 printf("\nenter third side ");
	 scanf("%d",&s3);

	 if(s1==s2 && s2==s3 && s3==s1)
	 {
		printf("The triangle is equilateral angle");			
	 }
	 else if(s1==s2 || s1==s2 || s1==s3)
	 {
		printf("The triangle is isoceles \n");
	 }

	 else 
	{	 
		if(s1>s2 && s1>s3)
	 	{
	 		b=(s1*s1);
	 		c=((s2*s2) +(s3*s3));
	 		if(b==c)
	 		{
	 			printf("The triangle is right angle \n");
	 		}
	 		else
	 		{
	 			printf("The triangle is scalen \n");
	 		}
	 	}
	 	else if (s2>s3)
	 	{
	 		b=(s2*s2);
	 		c=((s1*s1) +(s3*s3));
	 		if(b==c)
	 		{
	 			printf("The triangle is right angle \n");
	 		}
	 		else
	 		{
	 			printf("The triangle is scalen \n");
	 		}
	 	}
	 	else	
	 	{
	 		b=(s3*s3);
	 		c=((s1*s1) +(s2*s2));
	 		if(b==c)
	 		{
	 			printf("The triangle is right angle \n");
	 		}
	 		else
	 		{
	 			printf("The triangle is scalen \n");
	 		}
	 	}
	}
}