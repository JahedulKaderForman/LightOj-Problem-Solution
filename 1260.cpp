#include<bits/stdc++.h>
using namespace std;
int a[10000];
vector<int>b;
vector<int>::iterator low,up;
int search(int m){
for(int j=0;j<m;j++){
    b.push_back(a[j]);
}
sort(b.begin(),b.end());
low=lower_bound(b.begin(),b.end(),0);
up=upper_bound(b.begin(),b.end(),a[m]);
b.clear();
return (up-low);
}
int main(){
int test,n,temp;
cin>>test;
while(test--){
        temp=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        temp+=search(i);
    }
    cout<<temp<<endl;
}
}
