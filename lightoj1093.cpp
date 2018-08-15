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
#define mx 100006
ll a[mx],res,x,y,ans;
ll atree[4*mx],btree[4*mx];

void init(int node,int i,int j){
if(i==j){
    atree[node]=a[i];
    btree[node]=a[i];
    return;
}
int left=node*2;
int right=node*2+1;
int mid=(i+j)/2;
init(left,i,mid);
init(right,mid+1,j);
if(atree[left]<atree[right]){
    atree[node]=atree[left];
}
else{
     atree[node]=atree[right];
}
if(btree[left]<btree[right]){
    btree[node]=btree[right];
}
else{
     btree[node]=btree[left];
}
}

int minquary(int node,int i,int j,int a,int b){
if(i>b || j<a){
   return 10000000000;
}
if(i>=a && j<=b){
    return atree[node];
}
int left=node*2;
int right=node*2+1;
int mid=(i+j)/2;
int p1=minquary(left,i,mid,a,b);
int p2=minquary(right,mid+1,j,a,b);
if(p1>p2){
    return p2;
}
else{
    return p1;
}
}

int maxquary(int node,int i,int j,int a,int b){
if(i>b || j<a){
   return 0;
}
if(i>=a && j<=b){
    return btree[node];
}
int left=node*2;
int right=node*2+1;
int mid=(i+j)/2;
int p1=maxquary(left,i,mid,a,b);
int p2=maxquary(right,mid+1,j,a,b);
if(p1<p2){
    return p2;
}
else{
    return p1;
}
}

int main()
{
int t;
int n,d;
isc(t);
for(int i=1;i<=t;i++){
    ans=0;
    isc2(n,d);
    for(int j=1;j<=n;j++){
        llsc(a[j]);
    }
    init(1,1,n);
    for(int k=1;k<=n;k++){
    if(k+(d-1)<=n){
    x=minquary(1,1,n,k,k+(d-1));
    y=maxquary(1,1,n,k,k+(d-1));
    ans=max(ans,abs(x-y));
    }
    }
    casepf(i);
    printf("%lld\n",ans);

}


}





