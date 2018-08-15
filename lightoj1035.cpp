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

#include<bits/stdc++.h>
#define N 140
using namespace std;
int mark[150];
map<int,int>m;
map<int,int>:: iterator it;
vector<int>p;
void prime(){
int limit=sqrt(N)+2;
for(int i=4;i<=N;i+=2){
    mark[i]=1;
}
p.push_back(2);
for(int i=3;i<=N;i+=2){
    if(mark[i]==0){
        p.push_back(i);
        if(i<=limit){
            for(int j=i*i;j<=N;j+=i){
                mark[j]=1;
            }
        }
    }
}
}
void primefactor(int n){
int temp=(int)sqrt(n);
for(int i=0;p[i]<=temp;i++){
    if(n%p[i]==0){
        while(n%p[i]==0){
            n/=p[i];
            m[p[i]]++;
        }
    }
}
if(n>1){
    m[n]++;
}


}
int main(){
prime();
int t;
isc(t);
for(int j=1;j<=t;j++){
int n;
cin>>n;
for(int i=2;i<=n;i++){
primefactor(i);
}
casepf(j);
printf("%d =",n);
int x=1;
for(it=m.begin();it!=m.end();it++){
 //cout<<it->first<<" "<<it->second<<endl;
  if(x!=1){
    printf(" *");
 }
 printf(" %d (%d)",it->first,it->second);
 x++;
}
nl;
m.clear();
}
}






