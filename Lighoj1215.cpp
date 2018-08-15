#include <bits/stdc++.h>
using namespace std;

// loop and test case
#define ft    int t; scanf("%d", &t); for(int c=1; c<=t; c++)

//memset function
#define setz(a) memset(a, 0, sizeof(a))
#define setneg(a) memset(a, -1, sizeof(a))

#define sf scanf
#define pf printf

// integer input
#define isc(a) scanf("%d", &a)
#define isc2(a,b) scanf("%d%d", &a,&b)
#define isc3(a,b,c) scanf("%d%d%d", &a,&b,&c)

// long and unsinged long long integer input
#define lsc(a) scanf("%ld", &a)
#define lsc2(a,b) scanf("%ld%ld", &a,&b)
#define llsc(a) scanf("%lld", &a)
#define llsc2(a,b) scanf("%lld%lld", &a, &b)
#define llsc3(a,b,c) scanf("%lld%lld%lld", &a, &b, &c)
#define ullsc(a) scanf("%llu", &a)
#define ullsc2(a,b) scanf("%llu%llu", &a, &b)

// double input && output
#define dsc(a) scanf("%lf", &a)
#define dpf2(a) printf("%.2f", a)
#define dpf3(a) printf("%.3f", a)

//print function
#define ipf(a) printf("%d", a)
#define lpf(a) printf("%ld", a)
#define llpf(a) printf("%lld", a)
#define ullpf(a) printf("%llu", a)
#define nl printf("\n")

//Case printing
#define casepf(a) printf("Case %d: ", a)
#define casestr(a, b) printf("Case %d: %s\n", a,b)

//floor && ceil
#define fl(a) floor(a)
#define cl(a) ceil(a)


#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
typedef pair<int, int> pii;


typedef long long int ll;
typedef unsigned long long ull;

template <class T>
inline T gcd(T x,T y)
{
    T mod;
    while(x%y)
    {
        mod = x%y;
        x = y;
        y = mod;
    }
    return y;
}

int kdx[] = {2,2,-2,-2,1,-1,1,-1};
int kdy[] = {1,-1,1,-1,2,2,-2,-2};

int edx[] = {1,-1,0,0,1,1,-1,-1};
int edy[] = {0,0,1,-1,1,-1,1,-1};

int fdx[] = {1,-1,0,0};
int fdy[] = {0,0,1,-1};
vector<ull>d;
void divisor(ull n){
ull store, temp=sqrt(n);
for(int i=1;i<=temp;i++){
    if(n%i==0){
        store=n/i;
        if(store!=i){
            d.pb(store);
            d.pb(i);
        }
        else{
            d.pb(i);
        }
    }
}

}
ull lcm(ull a,ull b){
    ull x=a;
    ull y=b;
   ull mod,l;
    while(a%b){
        mod=a%b;
        a=b;
        b=mod;
    }
    l=(x*y)/b;
    return l;
}
int main()
{
ull a,b,L,x,y,ans;
int t;
isc(t);
for(int i=1;i<=t;i++){
    ullsc2(a,b);
    ullsc(L);
    x=lcm(a,b);
    //cout<<x<<endl;
    divisor(L);
    sort(d.begin(),d.end());
    int flag=0;
    for(int j=0;j<d.size();j++){
           // cout<<" "<<d[j]<<endl;
        if(lcm(d[j],x)==L){
            flag=1;
            ans=d[j];
            break;
        }
    }
    casepf(i);
    if(flag==1){
        printf("%llu\n",ans);
    }
    else{
       printf("impossible\n",ans);
    }
    d.clear();
}
}




