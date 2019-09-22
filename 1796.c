#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);

        int a,c1=0,c2=0;
        for(int i=0;i<t;i++)
        {
           scanf("%d",&a);
            if(a==0)
            c1++;
            if(a==1)
            c2++;

        }
        if(c1>c2)
        printf("Y\n");
        else
        printf("N\n");


    return 0;
}
