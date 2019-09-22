/*#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y;
    scanf("%d", &C);
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
        {
        scanf("%lf", &M[x][y]);
        if(x==C)
            a+=M[x][y];
        }
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/12.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    int i,j,k,l,m,n;
    char x[2];
    scanf("%d %s",&k,&x);
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&N[i][j]);
        }
    }
    for(i = 0;i < 12;i++){
            sum += N[k][i];
        }
    if(x[0]=='S')printf("%.1lf\n",sum);
    else if(x[0]=='M')printf("%.1lf\n",sum/12.0);
    return 0;
}
