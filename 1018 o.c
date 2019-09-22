#include <stdio.h>
int main()
{
    int N,Note100,Note50,Note20,Note10,Note5,Note2,Note1;
    scanf("%d",&N);
    Note100=(N/100);
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",Note100);
    Note50=(N%100)/50;
    printf("%d nota(s) de R$ 50,00\n",Note50);
    Note20=((N%100)%50)/20;
    printf("%d nota(s) de R$ 20,00\n",Note20);
    Note10=((N%100)%50%20)/10;
    printf("%d nota(s) de R$ 10,00\n",Note10);
    Note5=((N%100)%50%20%10)/5;
    printf("%d nota(s) de R$ 5,00\n",Note5);
    Note2=((N%100)%50%20%10%5)/2;
    printf("%d nota(s) de R$ 2,00\n",Note2);
    Note1=((N%100)%50%20%10%5%2);
    printf("%d nota(s) de R$ 1,00\n",Note1);
    return 0;
}
