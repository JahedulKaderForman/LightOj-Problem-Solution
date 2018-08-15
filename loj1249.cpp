#include<bits/stdc++.h>
using namespace std;
int main(){
int test,x,y,z,n,res,max,mini,q=1;
string temp,thief,person;
cin>>test;
while(test--){
        max=0,mini=10000000;
    cin>>n;
    while(n--){
        cin>>temp>>x>>y>>z;
        res=x*y*z;
        if(res>max){
            max=res;
            thief=temp;
        }
        if(res<mini){
            mini=res;
            person=temp;

        }
    }

    if(max!=mini){
            printf("Case %d: ",q);
        cout<<thief<<" took chocolate from "<<person<<endl;
    }
    else{
       printf("Case %d: ",q);
        cout<<"no thief"<<endl;
    }
    q++;
}






}
