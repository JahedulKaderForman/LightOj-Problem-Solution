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
#define m 100000007
int coin[101],t,n,k;
int dp[105][10005];
ll call(int amount){
for(int i=0;i<=amount;i++){
    dp[0][i]=0;
}
for(int i=0;i<=n;i++){
    dp[i][0]=1;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=amount;j++){
        if(coin[i-1]<=j){
            dp[i][j]=((dp[i-1][j]%m)+(dp[i][j-coin[i-1]]%m))%m;
        }
        else{
            dp[i][j]=dp[i-1][j]%m;
        }
    }
}
return dp[n][k]%m;
}
int main(){
isc(t);
setneg(dp);
for(int i=1;i<=t;i++){
isc2(n,k);
for(int j=0;j<n;j++){
    isc(coin[j]);
}
casepf(i);
cout<<call(k)<<endl;
}
}

