#include <stdio.h>
int main()
{
  long long x,y;
  while ( scanf("%ld",&x) != EOF)
  {
      scanf("%ld",&y);
      if(x>=y)
      {
          printf("%d\n",x-y);
      }
      else {printf("%d\n",y-x);}
  }
  return 0;
}
