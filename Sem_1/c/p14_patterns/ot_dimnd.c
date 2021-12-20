// ot_dimnd.c

// print stmt 1 to see how spaces are left after 1 loop then try and solve to get 
// the pattern

// dont start directly with " " use "#"

// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          * <-- line 1 :  the if mentioned below avoid it
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************

#include <stdio.h>
void main()
{
	int i,j,k;
	
	for(i=1; i<7; i++)
	{
		// this statement is to avoid line 1 as mentioned above
	    if(i==6)
	    {
	        break;
	    }
	    // 
		for(j=1; j<=(7-i); j++)
		{
			printf("*");
		}
		for(k=1; k<i; k++)
		{
			printf(" ");
			// printf("#"); <-- stmt 1
		}
		for(k=1; k<i; k++)
		{
			printf(" ");
			// printf("#");  <-- stmt 1
		}
		for(j=1; j<=(7-i); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// second loop 
	for(i=1; i<7; i++)
	{
	   	for(j=1; j<=i; j++)
		{
			printf("*");
		}
		for(k=1; k<(7-i); k++)
		{
		    printf(" ");
		    // printf("#");  <-- stmt 1
		}
		for(k=1; k<(7-i); k++)
		{
		    printf(" ");
		    // printf("#");  <-- stmt 1
		}
		for(j=1; j<=i; j++)
		{
		    printf("*");
		}
		printf("\n");
	}
}