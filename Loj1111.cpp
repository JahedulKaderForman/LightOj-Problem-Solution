#include <bits/stdc++.h>
using namespace std;

// loop and test case
#define ft    int t; scanf("%d", &t); for(int c=1; c<=t; c++)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop for (i=0; i<n; i++)

//memset function
#define setz(a) memset(a, 0, sizeof(a))
#define setneg(a) memset(a, -1, sizeof(a))

#define sf scanf
#define pf printf

// integer input
#define isc(a) scanf("%d", &a)
#define isc2(a,b) scanf("%d%d", &a,&b)
#define isc3(a,b,c) scanf("%d%d%d", &a,&b,&c)

// long and long long integer input
#define lsc(a) scanf("%ld", &a)
#define lsc2(a,b) scanf("%ld%ld", &a,&b)
#define llsc(a) scanf("%lld", &a)
#define llsc2(a,b) scanf("%lld%lld", &a, &b)
#define llsc3(a,b,c) scanf("%lld%lld%lld", &a, &b, &c)

// unsign long long input
#define ullsc(a) scanf("%llu", &a)
#define ullsc2(a,b) scanf("%llu%llu", &a, &b)

// double input
#define dsc(a) scanf("%lf", &a)
#define dpf2(a) printf("%.2f", a)
#define dpf3(a) printf("%.3f", a)

//Case printing
#define casepf(a) printf("Case %d: ", a)
#define casestr(a, b) printf("Case %d: %s\n", a,b)
#define nl printf("\n") //new line

#define fl(a) floor(a)
#define cl(a) ceil(a)


#define pb(a) push_back(a)
typedef pair<int, int> pii;
#define mp(a,b) make_pair(a,b)

typedef long long ll;
typedef unsigned long long ull;
int a[200],vis[1200],cn[1200];
vector<int>adj[1200];
void dfs(int s){
     vis[s]=1;
for(int i=0;i<adj[s].size();i++){
    int u=adj[s][i];
    if(vis[u]==0){
        cn[u]++;
        vis[u]=1;
        dfs(u);
    }
}
}
int main(){
int k,n,m,x,y;
ft{
isc3(k,n,m);
setz(cn);
for(int i=0;i<k;i++){
    isc(a[i]);
}
for(int i=1;i<=m;i++){
    isc2(x,y);
    adj[x].pb(y);
}
for(int i=0;i<k;i++){
    setz(vis);
    cn[a[i]]++;
    dfs(a[i]);
}
int ans=0;
for(int i=1;i<=n;i++){
    if(cn[i]>=k){
        ans++;
    }
}
casepf(c);
printf("%d",ans);
nl;
for(int i=1;i<=n;i++){
    adj[i].clear();
}
}


}
