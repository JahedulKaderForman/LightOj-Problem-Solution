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
pair<int,pair<int,int> >p[12005];
pair<int,pair<int,int> >q[12005];
int id[120],x,edge,j,n;
bool cmp(const pair<int,pair<int,int> >&a,const
         pair<int,pair<int,int> >&b){
return (a.first>b.first);
}
void init(){
for(int i=0;i<=n;i++){
    id[i]=i;
}
}
int root(int x){
while(id[x]!=x){
    id[x]=id[id[x]];
    x=id[x];
}
return x;
}
void uni(int a,int b){
    int p=root(a);
    int q=root(b);
    id[p]=id[q];

}
int minmumsping(pair<int,pair<int,int> >p[]){
ll cost=0;
int x,y,z;
for(int i=0;i<j;i++){
    x=p[i].second.first;
    y=p[i].second.second;
    z=p[i].first;
    //cout<<root(x)<<" "<<root(y)<<endl;
    if(root(x)!=root(y)){
        cost+=z;
        uni(x,y);
    }
}
return cost;
}
ll maxmumsping(pair<int,pair<int,int> >q[]){
ll cost=0;
int x,y,z;
for(int i=0;i<j;i++){
    x=q[i].second.first;
    y=q[i].second.second;
    z=q[i].first;
    if(root(x)!=root(y)){
        cost+=z;
        uni(x,y);
    }
}
return cost;
}
int main(){
int t,w;
ll mx,mi;
int a,b;
isc(t);
for(int i=1;i<=t;i++){
    isc(n);
     j=0;
    while(isc3(a,b,w)){
        if(a==0 && b==0 && w==0)
        break;
        p[j]=mp(w,mp(a,b));
        q[j]=mp(w,mp(a,b));
        j++;
    }
    init();
    sort(p,p+j);
    mi=minmumsping(p);
    sort(q,q+j,cmp);
    init();
    mx=maxmumsping(q);
    casepf(i);
    if((mi+mx)%2==0){
        printf("%lld\n",(mi+mx)/2);
    }
    else{
       printf("%lld/%d\n",(mi+mx),2);
    }
}
}


