#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("inputen.in","r",stdin);
freopen("output.out","w",stdout);
int test,row,col,q=1,res;
scanf("%d",&test);
while(test--){
    scanf("%d%d",&row,&col);
    res=ceil((row*col)/2.0);
    printf("Case %d: %d\n",q,res);
    q++;
}



}
