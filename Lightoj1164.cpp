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
#define mx 100005
struct info{
ll prog,sum;
}tree[4*mx];
void update(int node,int i,int j,int a,int b,int x){
if(i>b || j<a){
    return;
}
if(i>=a && j<=b){
    tree[node].sum+=(((j-i)+1)*x);
    tree[node].prog+=x;
    return;
}
int left=node*2;
int right=node*2+1;
int mid=(i+j)/2;
update(left,i,mid,a,b,x);
update(right,mid+1,j,a,b,x);
tree[node].sum=tree[left].sum+tree[right].sum+(j-i+1)*tree[node].prog;
}
ll quary(int node,int i,int j,int a,int b,ll carry=0){
if(i>b || j<a){
    return 0;
}
if(i>=a && j<=b){
   return tree[node].sum +(j-i+1)*carry;

}
int left=node*2;
int right=node*2+1;
int mid=(i+j)/2;
ll p1,p2;
p1=quary(left,i,mid,a,b,carry+tree[node].prog);
p2=quary(right,mid+1,j,a,b,carry+tree[node].prog);
return p1+p2;
}
int main()
{
int t,n,q,x,y,v,s;
ll ans=0;
isc(t);
for(int i=1;i<=t;i++){
    isc2(n,q);
    setz(tree);
    printf("Case %d:",i);
    nl;
    while(q--){
        isc(s);
        if(s==0){
            isc3(x,y,v);
            update(1,1,n,x+1,y+1,v);
        }
        else{
            isc2(x,y);
            ans=quary(1,1,n,x+1,y+1,0);
            printf("%lld\n",ans);
        }
    }
}


}




