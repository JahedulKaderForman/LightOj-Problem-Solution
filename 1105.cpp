#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,x,y,z,flag,n,st;
while(cin>>a>>b){
    if(a==0 && b==0)
            break;
        flag=0,st=0;
    for(int i=0;i<a;i++){
        cin>>n;
        st+=n;
    }
    for(int i=0;i<b;i++){
        cin>>x>>y>>z;
        if(st<z)
            flag=1;
    }
    if(flag==1)
        cout<<"N"<<endl;
    else
        cout<<"S"<<endl;


}


}
