#include <stdio.h>
int main()
{
    int N,a,b,c,d,e,f,g,h,i,j,k,l;
    scanf ("%d", &N);

    printf ("%d\n",N);
    printf ("%d nota(s) de R$ 100,00\n",N/100);
     b=N%100;
    printf ("%d nota(s) de R$ 50,00\n",b/50);
    d=b%50;
    printf ("%d nota(s) de R$ 20,00\n",d/20);
    f=d%20;
    printf ("%d nota(s) de R$ 10,00\n",f/10);
    h=f%10;
    printf ("%d nota(s) de R$ 5,00\n", h/5);
    j=h%5;
    printf ("%d nota(s) de R$ 2,00\n", j/2);
    l=j%2;
    printf ("%d nota(s) de R$ 1,00\n",l);
    return 0;
}
