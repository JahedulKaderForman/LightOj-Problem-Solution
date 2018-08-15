#include<bits/stdc++.h>
using namespace std;
int main(){
char a;
int n;
string b;
while(cin>>a>>b){
    if(a=='0' && b=="0")
        break;
    n=b.find(a);
    while(n!=-1){
        b.erase(n,1);
        n=b.find(a);
    }
    int cn=0;
   for(int i=0;i<b.size();i++){
    if(b[i]=='0'){
        cn++;
    }
    else{
        break;
    }
   }
   if(cn==b.size())
    cout<<0<<endl;
   else{
    b.erase(0,cn);
    cout<<b<<endl;
   }
}
}



