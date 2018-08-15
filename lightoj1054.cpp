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
#define M 1000000007
ull biginverse(ull a,ull b){
ull ret;
if(b==0)
    return 1;
 if(b%2==0){
     ret=biginverse(a,b/2);
    return ((ret%M)*(ret%M))%M;
}
else{
      ret=((a%M)*(biginverse(a,b-1)%M))%M;
      return ret;
}
}

ull bigmod(ull a,ull b){
ull ret;
if(b==0)
    return 1;
if(b%2==0){
     ret=(bigmod(a,b/2))%M;
    return ((ret%M)*(ret%M))%M;
}
else{
      ret=((a%M)*(bigmod(a,b-1)%M))%M;
      return ret;
}
}

#define N 100000
int mark[100006];
map<int,int>m;
map<int,int>:: iterator it;
vector<int>p;
void prime()
{
    int limit=sqrt(N)+2;
    for(int i=4; i<=N; i+=2)
    {
        mark[i]=1;
    }
    p.push_back(2);
    for(int i=3; i<=N; i+=2)
    {
        if(mark[i]==0)
        {
            p.push_back(i);
            if(i<=limit)
            {
                for(int j=i*i; j<=N; j+=i)
                {
                    mark[j]=1;
                }
            }
        }
    }
}
void primefactor(ll n)
{
    int temp=(int)sqrt(n);
    for(int i=0; p[i]<=temp && i<p.size(); i++)
    {
        if(n%p[i]==0)
        {
            while(n%p[i]==0)
            {
                n/=p[i];
                m[p[i]]++;
            }
            temp=sqrt(n);
        }
    }
    if(n>1)
    {
        m[n]=1;
    }


}

int main(){
prime();
ull n,w,res=1,sum,x,r,y,temp;
ft{
sum=1;
ullsc2(n,w);
primefactor(n);
    for(it=m.begin(); it!=m.end(); it++)
    {
        x=(((it->second)%M)*(w%M))%M;
        temp=(it->first)%M;
        res=bigmod(it->first,x+1)-1;
        res=((res%M)*(biginverse(it->first-1,M-2)%M))%M;
       // cout<<res<<" "<<it->first-1<<endl;
        sum=((sum%M)*(res%M))%M;
    }
casepf(c);
    printf("%llu\n",sum);
m.clear();
}

}
