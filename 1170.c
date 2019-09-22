#include<stdio.h>
int main()
{
      int n,i,ck;
      double kg;
      while(scanf("%d",&n)==1){
                  for(i=1;i<=n;i++){
                        scanf("%lf",&kg);
                        ck=0;
                        while(kg>1){
                              kg=kg/2;
                              ck++;
                        }
                        printf("%d dias\n",ck);
                  }
      }
      return 0;
}
