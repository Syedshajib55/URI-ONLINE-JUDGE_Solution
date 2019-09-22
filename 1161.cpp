 /*#include<stdio.h>

main()
{
	long long int i,i1,n,n1;
	long long int f1,f2;
	f1=f2=1;
	while(scanf("%lld %lld",&n,&n1) != EOF){

		for(i=1; i<=n; i++){
			f1=f1 * i;
		}
		for(i1=1; i1<=n1; i1++){
			f2=f2 * i1;
		}
		long long int sum = f1+f2;
		printf("%lld\n",sum);
		f1=f2=1;
	}
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,fact=1,factorial=1;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;
    } for(i=1; i<=m; i++)
    {
        fact=fact*i;
    }

    printf("%d\n",fact+factorial);
fact=factorial=1;
    return 0;
}

