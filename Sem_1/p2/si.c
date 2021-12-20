#include <stdio.h>
void main()
{
  int a,b,d;
  float c;
   printf ("\nEnter rate:");
   scanf("%d",&a);
   printf ("\nEnter years:");
   scanf("%d",&b);
   printf ("\nEnter amount:");
   scanf("%d",&d);
   c=d*b*a/100;
   printf ("\n Simple Intrest is : %f \n",c);
}
