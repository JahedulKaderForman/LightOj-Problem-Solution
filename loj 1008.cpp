#include<bits/stdc++.h>
using namespace std;
int main(){
unsigned long long int s,n,row,col,x;
int test;
scanf("%d",&test);
for(int i=1;i<=test;i++){
    scanf("%llu",&s);
    x=ceil(sqrt(s));
    n=s-round(pow((x-1),2));
    if(x%2==0){
        if(x>=n){
            row=x;
            col=s-round(pow((x-1),2));
        }
        else{
            col=x;
            row=((x*x)+1)-s;
        }
    }
    else{
        if(x<=n){
             row=x;
            col=((x*x)+1)-s;
        }
        else{
            col=x;
            row=s-round(pow((x-1),2));
        }
    }
    printf("Case %d: %llu %llu\n",i,col,row);
}





}
