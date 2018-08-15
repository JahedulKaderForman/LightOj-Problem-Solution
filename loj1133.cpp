#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll test,i,j,store,x,cn,flag,y,m,n,a[2000],b[2000];
    int k;
    string temp;
    cin>>test;
    for(i=1; i<=test; i++)
    {
        flag=0;
        cin>>x>>y;
        for(j=0; j<x; j++)
        {
            cin>>a[j];
        }
        for(j=1; j<=y; j++)
        {
            cin>>temp;
            if(temp=="P")
            {
                cin>>m>>n;
                store=a[m];
                a[m]=a[n];
                a[n]=store;
            }
            else if(temp=="S")
            {
                cin>>m;
                for(k=0; k<x; k++)
                {
                    a[k]+=m;
                }
            }
            else if(temp=="D")
            {
                cin>>m;
                for(k=0; k<x; k++)
                {
                    a[k]/=m;
                }
            }
            else if(temp=="M")
            {
                cin>>m;
                for(k=0; k<x; k++)
                {
                    a[k]*=m;
                }
            }
            else if(temp=="R")
            {
                cn=0;
                flag=1;
                for(k=x-1; k>=0; k--)
                {
                    b[cn++]=a[k];
                }
                cn=0;
                 for(k=0; k<x; k++)
                {
                    a[cn++]=b[k];
                }

        }
        }
        printf("Case %d:\n",i);
        for(k=0;k<x;k++){
                if(k!=0)
                cout<<" ";
            cout<<a[k];
        }
        cout<<endl;
        }

    }





