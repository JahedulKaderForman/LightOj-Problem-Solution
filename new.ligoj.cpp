#include<bits/stdc++.h>
using namespace std;
#define ft    int t; scanf("%d", &t); for(int c=1; c<=t; c++)
#define tc1(x)        printf("Case %d: ",x)
#define ipf(a) printf("%d", a)
#define nl printf("\n")
int dec(int temp){
    int arr[10],brr[10],i=0,j,k,flag=0,store=0;
while(temp!=0){
    if(temp%2==0 ){
        arr[i]=0;
          i++;
    }
    else{
        arr[i]=1;
          i++;
    }
     temp=temp/2;

}
k=0;
for(j=i-1;j>=0;j--){
        brr[k]=arr[j];
k++;
}
for(j=0;j<k;j++){
    if(brr[j]==1){
        flag=1;
    }
    if(flag==1){
        store=store*10+brr[j];
    }
}

return store;
}
using namespace std;
int main(){
int a,b,c,d,m,n,x,y,q=1,test;
cin>>test;
char s;
while(test--){
scanf("%d %c %d %c %d %c %d",&a,&s,&b,&s,&c,&s,&d);
scanf("%d %c %d %c %d %c %d",&m,&s,&n,&s,&x,&s,&y);
a=dec(a);
b=dec(b);
c=dec(c);
d=dec(d);
if(a==m && b==n && c==x && d==y){
    tc1(q);
    printf("Yes\n");
}
else{
    tc1(q);
    printf("No\n");
}
q++;
}
return 0;
}

