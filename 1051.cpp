#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,x,y,a,b,c;
    cin>>n;
    if(n>=0 && n<=2000.00)
    {
        cout<<"Isento"<<endl;
    }
    else if(n>=2000.00 && n<=3000.00)
    {
        n=n-2000.00;
        cout<<"R$ "<<(n*8)/100<<endl;
    }
    else if(n>= 3000.00 && n<=4500.00)
    {
        n=n-3000.00;
        cout<<"R$ "<<((n*18)/100)+80<<endl;
    }
    else
    {
        n=n-4500.00;
        cout<<"R$ "<<((n*28)/100)+270+80<<endl;
    }
}
