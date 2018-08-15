#include<bits/stdc++.h>
#define uLL unsigned long long int
#define M 1000000007
uLL f[1006];
using namespace std;
void fact()
{
    uLL j,res,i;
    f[0]=1;
    for(j=1;j<=1006;j++){
        f[j]=((f[j-1]%M)*(j%M))%M;
    }
}
uLL modular_inverse(uLL a,uLL b)
{
    uLL ret;
    if(b==0)
        return 1;
    if(b%2==0)
    {
        ret=modular_inverse(a,b/2);
        return ((ret%M)*(ret%M))%M;
    }
    else
        return ((a%M)*(modular_inverse(a,b-1)%M))%M;
}


int main()
{
    int t,n,r,k;
    uLL a,b,c,temp,x,y,q;
    fact();
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&r);
        k=n-r;
        a= f[n];
        x=modular_inverse(f[k],M-2);
        temp=((a%M)*(x%M))%M;
        printf("Case %d: %llu\n",i,temp);
    }
}
