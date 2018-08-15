#include<bits/stdc++.h>
#define llu unsigned long long int
using namespace std;
double a[1000006];
void pre(){
a[1]=log(1);
for(int i=2;i<1000005;i++){
    a[i]=a[i-1]+log(i);
}
}
int main(){
pre();
int t,n,b;
llu ans;
double sum;
scanf("%llu",&t);
for(int i=1;i<=t;i++){
        sum=0;
    scanf("%d%d",&n,&b);
    ans=floor(a[n]/log(b))+1;
    printf("Case %d: %llu\n",i,ans);
}


}
