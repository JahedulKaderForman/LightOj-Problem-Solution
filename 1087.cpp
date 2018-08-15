#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,a,b,n,n1;
while(cin>>x>>y>>a>>b){
    if(x==0 && y==0 && a==0 && b==0)
            break;
    if(x==a && y==b){
        cout<<0<<endl;
        continue;
    }
    n=abs(x-a);
    n1=abs(y-b);
    if(x==a || y==b || n==n1)
        cout<<1<<endl;
    else
        cout<<2<<endl;
}


}
