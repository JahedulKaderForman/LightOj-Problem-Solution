#include<bits/stdc++.h>
using namespace std;
int Dp[1003][1003];
string x,y;
int LCS(int i,int j){
if(i==0 || j==0)
    return 0;
if(Dp[i][j]!=-1)
    return Dp[i][j];
if(x[i-1]==y[j-1]){
    Dp[i][j]=1+LCS(i-1,j-1);

}
else{
    int a=0,b=0;
    a=LCS(i-1,j);
    b=LCS(i,j-1);
    if(a>b){
        Dp[i][j]=a;
    }
    else{
        Dp[i][j]=b;
    }
}
return Dp[i][j];
}
int main(){
int t,n,w,z;
cin>>t;
cin.ignore();
for(int i=1;i<=t;i++){
    memset(Dp,-1,sizeof(Dp));
    getline(cin,x);
    y=x;
    reverse(y.begin(),y.end());
    w=x.size();
    z=y.size();
    n=LCS(w,z);
    printf("%d\n",n);
}

}
