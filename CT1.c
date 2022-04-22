#include <stdio.h>
void main()
{
  int f;
  int a,b,c;
  c = 0;
  scanf("%d %d %d",&f,&a,&b);
  if(f==1)
    c=a+b;
  else if(f==2)
    c=a-b;
  else if(f==3)
    c=a*b;
  else if(f==4)
    c=a/b;
  printf("%d",c);
}
