#include <stdio.h>
void main()
{

    int i,X,count=0;
    scanf("%d",&X);

    for(i=2; i<X; i++)
    {
        if(X%i==0)
        {count++;
        break;
       }

    }
    if(count==0)
        printf("%d nao eh primo\n",X);
    else
        printf("%d eh primo\n",X);
    return 0;

}
