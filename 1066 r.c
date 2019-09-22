#include<stdio.h>
int main()
{

    int x,i,count=0,sp=0,sk=0,sl=0;
    for(i=1;i<=5;i++){
    scanf("%lf",&x);
    if(x>0)
    {
        count++;

    }
    else if(x<0)
    {
        sp++;
    }
    else if(x%2 != 0)
    {
        sk++;
    }
    else if(x%2==0)
    {
        sl++;
    }

    }

     printf("%d valor(es) par(es)\n",sl);
     printf("%d valor(es) impar(es)\n",sk);
     printf("%d valor(es) positivo(s)\n",count);
     printf("%d valor(es) negativo(s)\n",sp);
     return 0;

}

