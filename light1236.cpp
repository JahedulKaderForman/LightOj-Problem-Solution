#include <bits/stdc++.h>
using namespace std;

#define isc(a) scanf("%d", &a)
#define llsc(a) scanf("%lld", &a)
#define casepf(a) printf("Case %d: ", a)
typedef long long int ll;
typedef unsigned long long ull;



/// Memory Efficient Sieve by bitset ***given maximum memory limit 32MB
#define m 10000009
bitset<10000013>bs;
int p[777777],x;
void seive(){
bs.set();
bs[0]=0;
bs[1]=0;
x=0;
for(ll i=2;i<m;i++){
    if(bs[i]==1){
        for(ll j=i*i;j<m;j+=i){
            bs[j]=0;
        }
       p[x]=(int)i;
       x++;
    }
}
}
/// primefactorization and formula of number of all pair lcm ((2*e1+1)*(2*e2+1)....*(2*e^n+1))+1 / 2
ll factor(ll n){
ll temp=sqrt(n)+1;
ll ans=1;
for(int i=0;p[i]<=temp && i<x;i++){
    int e=0;
    if(n%p[i]==0){
        while(n%p[i]==0){
            n/=p[i];
            e++;
        }
        ans*=(2*e)+1;
        temp=sqrt(n);  /// reduce time complexity
    }
}
if(n>1){
    ans*=(2*1)+1;
}
return ans+1;
}

int main(){
int t;
ll x,res;
isc(t);
seive();
for(int i=1;i<=t;i++){
    llsc(x);
    res=factor(x);
    res=res/2;
    printf("Case %d: %lld\n",i,res);
}
}

