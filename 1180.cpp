#include<bits/stdc++.h>
#define mx 1000000
#define ll unsigned long long int
using namespace std;
vector<int>prime;
ll a[1000];
int mark[mx];
void sieve()
{
    int i,j,limit=sqrt(mx)+1;
    mark[1]=1;

    for(int i=4; i<=mx; i+=2)
        mark[i]=1;
    prime.push_back(2);

    for(i=3; i<=mx; i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(j=i+i; j<=mx; j+=i)
                {
                    mark[j]=1;
                }
            }
        }
    }
}


ll power(int n)
{
    ll p=1;
    for(int i=1; i<=n; i++)
    {
        p=p*2;
    }
    return p;
}


int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    sieve();
    ll n,temp;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        scanf("%llu,",&a[i]);
    }
    for(int j=0; j<t; j++)
    {
        int flag1=0,flag2=0;
        temp=power(a[j])-1;
        for(int i=0; i<prime.size(); i++)
        {
            if(prime[i]==a[j])
            {
                flag1=1;
                break;
            }
        }
        for(int i=0; i<prime.size(); i++)
        {
            if(prime[i]==temp)
            {
                flag2=1;
                break;
            }
        }

        if(flag1==1 && flag2==1)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }


}
