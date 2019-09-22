#include<stdio.h>
int main()
{
   long long int n, first = 0, second = 1, next, c;
   int i,j;
   scanf("%d", &j);
   for(i=1; i<=j; i++, first = 0, second = 1)
   {
       scanf("%lld",&n);
       n=n+1;
       for ( c = 0 ; c < n ; c++ )
       {
          if (c <= 1) next = c;
          else
          {
             next = first + second;
             first = second;
             second = next;
          }
       }
          printf("Fib(%lld) = %lld\n",n-1,next);
   }
   return 0;
}
/*#include<stdio.h>
int main()
{
    int i,n,k;
    long long int N[61];
    N[0]=0;
    N[1]=1;
    for(i = 2;i < 61;i++){
        N[i]=N[i-1]+N[i-2];
    }
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&k);
        printf("Fib(%d) = %lld\n",k,N[k]);
    }
    return 0;
}
/*
