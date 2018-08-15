#include<bits/stdc++.h>
using namespace std;
int main(){
unsigned long long int n,i,m,flag,t;
int q=1;
cin>>t;
while(t--)
{
    flag=0;
    scanf("%llu",&n);
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=1;
            m=n/i;
            if(m*i==n && m%2==0 && i%2!=0)
            {
                printf("Case %d: %llu %llu\n",q,i,m);
                break;
            }
            else if(m*i==n && i%2==0 && m%2!=0)
            {
                printf("Case %d: %llu %llu\n",q,m,i);
                break;
            }

        }
    }
    if(flag==0)
    {
        printf("Case %d: Impossible\n",q);
    }
    q++;
}
return 0;
}

