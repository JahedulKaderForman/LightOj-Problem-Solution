#include<bits/stdc++.h>
using namespace std;
#define B 2147483650
#define llu unsigned long long int
long long int arr[1000004],mark[1000004],prime[1000004],res;
void pr(){
mark[0]=1;
mark[1]=1;
int st=sqrt(B)+1;
for(int i=4;i<=1000004;i+=2){
    mark[i]=1;
}
mark[2]=0;
prime[0]=2;
int k=1;
for(int i=3;i<=1000004;i+=2){
    if(mark[i]==0){
        prime[k++]=i;
        if(i<=st){
        for(int j=i+i;j<1000004;j+=i){
            mark[j]=1;
        }
        }
    }
}
}
void segment(llu a,llu b){
 if(a==1)
    a++;
memset(arr,0,sizeof(arr));
int j,p,k=0,max=0,m,mini=10000000;
int tm=sqrt(b);
for(int i=0;i<78498 && prime[i]<=tm;i++){

    p=prime[i];
//cout<<p<<endl;
    j=p*p;
    if(j<a){
        j=(((a+p-1)/p)*p);
    }
    for(;j<=b;j+=p){
        arr[j-a]=1;
    }

}
res=0;
for(int i=a;i<=b;i++){
    if(arr[i-a]==0){
       res++;
    }
}


}
int main(){
pr();
llu l,u,test;
scanf("%llu",&test);
for(int i=1;i<=test;i++){
scanf("%llu%llu",&l,&u);
segment(l,u);
printf("Case %d: %llu\n",i,res);
}



}

