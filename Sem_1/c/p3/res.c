#include <stdio.h>
void main()
{
  int a,t,u,z,y;
  float s;
  printf ("Enter marks 1 : \n");
  scanf("%d",&a);
  printf ("Enter marks 2 :  \n");
  scanf("%d",&t);
  printf ("Enter marks 3 :  \n");
  scanf("%d",&u);
  printf ("Enter marks 4 :  \n");
  scanf("%d",&z);
  printf ("Enter marks 5 :  \n");
  scanf("%d",&y);

  s=(a+t+u+z+y)*(100.0/500.0);
  printf ("Result is %f \n: ",s); 
}
