#include <stdio.h>
void main()
{
  int a,t,u;
  float s;
  printf ("Enter acceleration : \n");
  scanf("%d",&a);
  printf ("Enter time :  \n");
  scanf("%d",&t);
  printf ("Enter initial velocity \n");
  scanf("%d",&u);
  s=(u*t)+(0.5*a*t*t);
  printf ("Enter %f \n: ",s); 
}
