#include<bits/stdc++.h>
using namespace std;
int main(){
int test,a[1000],b[1000],j,i,k,q=1,sum;
cin>>test;
while(test--){
    cin>>k;
    for(i=0;i<2*k;i++){
        cin>>a[i];
    }
    j=0;
    for(i=1;i<2*k;i+=2){
        b[j]=abs(a[i]-(a[i-1]+1));
        j++;
    }
    sum=b[0];
    for(i=1;i<j;i++){
        sum^=b[i];
    }
    if(sum==0){
        printf("Case %d: Bob\n",q);
    }
    else{
        printf("Case %d: Alice\n",q);
    }
q++;
}



}
