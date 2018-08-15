#include <bits/stdc++.h>
using namespace std;

#define ft    int t; scanf("%d", &t); for(int c=1; c<=t; c++)
// integer input
#define isc(a) scanf("%d", &a)
#define llsc(a) scanf("%lld", &a)
#define casepf(a) printf("Case %d: ", a)
typedef long long int ll;

#define sz 1000000002
int flag=0;
vector<int>p;
int f(){
int x=5,temp;
while(x<=sz){
    p.push_back(x);
    x=x*5;
}
}

ll countt(ll m){
ll x=0;
for(int i=0;i<p.size();i++){
        x+=(ll)m/p[i];
}
return x;
}

ll bisection(ll n){
ll low=1,high=sz,mid,res,temp=-1;
while(low<=high){
mid=(low+high)/2;
//cout<<mid<<endl;
res=countt(mid);
//cout<<"res "<<res<<endl;
if(res==n){
    temp=mid;
    high=mid-1;
}
else if(res>n){
    high=mid-1;
}
else{
   low=mid+1;
}
}
return temp;
}
int main(){
ll n,ans;
f();
ft{
llsc(n);
ans=bisection(n);
casepf(c);
if(ans==-1){
    printf("impossible\n");
}
else{
    printf("%lld\n",ans);
}
}
}

