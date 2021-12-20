// str_updwn_pyr.c
// * * * * * * * * * * *
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *

#include <stdio.h>
void main()
{
	int i,j,k;
	for(i=1; i<=6; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
        
        // there are 11,9,7,5,3,1 * in each row 6 row 
        // therefore 2*total row(6)  - 2 * row no(i)-1
        // 12 - (2 *1 -1) =11
        // 12 - (2 *2 -1) =12 - 3 =9
        // 12 - (2 *3 -1) =12 - 5 =7
		
		for(k=1; k<=(6*2 -(2*i-1)); k++)
		{
			printf("*");
		}
		printf("\n");
	}
}