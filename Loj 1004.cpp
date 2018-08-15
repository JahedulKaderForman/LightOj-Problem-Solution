#include<bits/stdc++.h>
#define ll unsigned long long int

using namespace std;
int n;
ll a[250][250];
ll dp[250][250];
ll rock(int i,int j){
if((i>=1 && i<=2*n-1) && (j>=1 && j<=n)){
  if(dp[i][j]!=-1){
    return dp[i][j];
  }
  ll ret;
  if(i<n){
  ret=0;
  ret=max(ret,rock(i+1,j)+a[i][j]);
  ret=max(ret,rock(i+1,j+1)+a[i][j]);
  return dp[i][j]=ret;
  }
  else{
  ret=0;
  ret=max(ret,rock(i+1,j)+a[i][j]);
  ret=max(ret,rock(i+1,j-1)+a[i][j]);
  return dp[i][j]=ret;
  }
}
else
    return 0;


}
int main(){
int t,temp;
scanf("%d",&t);
for(int i=1;i<=t;i++){
     memset(dp,-1,sizeof(dp));
     memset(a,0,sizeof(a));
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        for(int k=1;k<=j;k++){
            scanf("%llu",&a[j][k]);
        }
    }
    temp=1;
    for(int j=n+1;j<=(n+(n-1));j++){
        for(int k=1;k<=n-temp;k++){
             scanf("%llu",&a[j][k]);
        }
        temp++;
    }
    ll ans=rock(1,1);
    printf("Case %d: %llu\n",i,ans);

}




}
