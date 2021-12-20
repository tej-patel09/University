// day_week.c Program to check day of given no.
#include <stdio.h>

void main()
{
	int w;

	printf("Enter week number: ");
	scanf("%d", &w);

	switch(w)
	{
		case 1:
		printf("Monday \n");
		break;
		case 2:
		printf("Tuesday \n");
		break;
		case 3:
		printf("Wednesday \n");
		break;
		case 4:
		printf("Thursday \n");
		break;
		case 5:
		printf("Friday \n");
		break;
		case 6:
		printf("Saturday \n");
		break;
		case 7:
		printf("Sunday \n");
		break;
		default:
		printf("Please enter week number between 1-7. \n");
	}
}