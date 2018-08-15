#include<bits/stdc++.h>
#define ft    int t; scanf("%d", &t); for(int c=1; c<=t; c++)
#define tc1(x)        printf("Case %d: ",x)
#define ipf(a) printf("%d", a)
#define nl printf("\n")
int dec(int temp){
    int arr[10],i=0,j;
while(temp!=0){
    temp=temp/2;
    if(temp%2==0){
        arr[i]=0;
    }
    else{
        arr[i]=1;
    }
    i++;
}
int k=0,store=1;
for(j=i-1;j>=0;j--){
    arr[k]=arr[j];
    k++;
}
for(j=0;j<i;j++){
    store=(store*10)+arr[j];
}
return store;
}
using namespace std;
int main(){
int a,b,c,d,m,n,x,y;
char s;
ft{
scanf("%d %c %d %c %d %c %d",&a,&s,&b,&s,&c,&s,&d);
scanf("%d %c %d %c %d %c %d",&m,&s,&n,&s,&x,&s,&y);
a=dec(a);
b=dec(b);
c=dec(c);
d=dec(d);
printf("%d %d %d %d\n",a,b,c,d);

printf("%d %d %d %d",m,n,x,y);

}

}
