#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long uLL;
typedef long long LL;

#define n 5000006
uLL phii[5000006];
int mark[5000006];
void seivephi(){    /// generate 1 to n eular' phi value
int i,j;
for(int i=1;i<=n;i++){
    phii[i]=i;
}
phii[1]=1;
mark[1]=1;
for(i=2;i<=n;i++){
    if(!mark[i]){
        for(int j=i;j<=n;j+=i){
            mark[j]=1;
            phii[j]=phii[j]/i*(i-1);
        }
    }
}
}

int main(){
uLL a,b;
int test;
uLL res;
seivephi();
phii[1]=phii[1]*phii[1];
for(int i=2;i<n;i++){
  phii[i]=(phii[i]*phii[i])+phii[i-1];    /// cumulative sum for avoid TLE.
}
cin>>test;
for(int i=1;i<=test;i++){
    scanf("%llu%llu",&a,&b);
    res=phii[b]-phii[a-1];
    printf("Case %d: %llu\n",i,res);
}
}
