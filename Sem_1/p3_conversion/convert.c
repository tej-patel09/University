#include <stdio.h>
void main()
{
  int km;
  float m,cm,feet,inch;
  printf ("Enter distance in kilometer : \n");
  scanf("%d",&km);
  m=1000.0*km;
  cm=100.0*m;
  feet=3.28084*m;
  inch=39.3701*m;
  printf("\ndistance in feet is : %f \n",feet);
   printf("\ndistance in inch is : %f \n",inch);
    printf("\ndistance in cm is : %f\n",cm);
     printf("\ndistance m in is : %f\n",m);
}
