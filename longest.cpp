#include<bits/stdc++.h>
using namespace std;
#define MAXC 1000
int dp[MAXC][MAXC];
string A,B;
bool visited[MAXC][MAXC];
int lcs(int i,int j)
{
    if(A[i]=='\0' or B[j]=='\0')
        return 0;
    if(visited[i][j])
        return dp[i][j];
    int ans=0;
    if(A[i]==B[j])
    {
        ans=1+lcs(i+1,j+1);
    }
    else
    {
        int valu1=lcs(i+1,j);
        int valu2=lcs(i,j+1);
        ans=max(valu1,valu2);
    }
    visited[i][j]=1;
    dp[i][j]=ans;
    return dp[i][j];
}
int main()
{
   // freopen("input.txt","w",stdin);
   // freopen("output.txt","w",stdout);
    while(getline(cin,A))
    {
        memset(dp,0,sizeof dp);
        memset(visited,0,sizeof visited);
        getline(cin,B);
        int lenA=A.length();
        int lenB=B.length();
        printf("%d\n",lcs(0,0));

    }
    return 0;
}
