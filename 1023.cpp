#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,x,y,j;
    char s[28];
    char temp;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        temp='A';
    scanf("%d%d",&x,&y);
   printf("Case %d:\n",i);
    for(j=0;j<x;j++){
        s[j]=temp;
        temp++;
    }
    s[j]='\0';
    printf("%s\n",s);
     int cn=1;
    while(next_permutation(s,s+x)){
            printf("%s\n",s);
             cn++;
            if(cn==y)
               break;

   }
    }
}
