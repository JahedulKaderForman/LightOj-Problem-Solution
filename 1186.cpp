#include<bits/stdc++.h>
using namespace std;
int main(){
int test,a[1000],b[1000],q=1,sum,i,n,x,y;
cin>>test;
while(test--){
    cin>>n;
    sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        a[i]=(b[i]-(a[i]+1));
       // cout<<a[i]<<" ";
    }
    x=a[0];
    y=a[1];
    for(i=2;i<=n;i++){
        sum=x^y;
        x=sum;
        y=a[i];

    }
    if(sum==0){
        printf("Case %d: black wins\n",q);
    }
    else{
         printf("Case %d: white wins\n",q);
    }
    q++;
}

}
