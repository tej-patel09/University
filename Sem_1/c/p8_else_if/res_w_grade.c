// calcute result of 5 subjects and give class
#include <stdio.h>
void main()
{
	int ma,sc,en,co,ss;
	float res;
	printf("\nEnter math marks : ");
	scanf("%d",&ma);
	
	printf("\nEnter sci marks : ");
	scanf("%d",&sc);

	printf("\nEnter eng marks : ");
	scanf("%d",&en);

	printf("\nEnter comp marks : ");
	scanf("%d",&co);

	printf("\nEnter ss marks : ");
	scanf("%d",&ss);

	res=((ma+sc+en+co+ss)/500.0)*100.0;
	printf("%f",res);
	if(res<35)
	{
		printf("\n Failed \n");

	}
	else if(res>=35 && res<45)
	{
		printf("\n Passed\n");		
	}
	else if(res>=45 && res<60)
	{
		printf("\n Second Class\n");
	}
	else if(res>=60 && res<75)
	{
		printf("\n First Class\n");
	}
	else if(res>=75 && res<=100)
	{
		printf("\n Distinction\n");
	}
	else if( sc>100 || ma>100 || en>100 || co>100 || ss>100)
	{
		printf("\n Enter Proper marks\n");
	}
	else
	{
		printf("\nCodition error\n");
	}
	
}