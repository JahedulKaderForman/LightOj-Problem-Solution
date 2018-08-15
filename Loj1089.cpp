#include<bits/stdc++.h>
#define ll long long int
#define mx (3*100001)
using namespace std;
int arr[mx];
int main()
{
    int t,n,q,x,y,val;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {

        memset(arr,0,sizeof arr);
        map<int,int>mp;
        vector< pair<int,int> > p;
        vector<int>v;
        vector<int>qu;
        map<int,int>:: iterator it;

        printf("Case %d:\n",i);

        scanf("%d%d",&n,&q);
        int cn=0;

        while(n--)
        {
            scanf("%d%d",&x,&y);
            if(mp.find(x)==mp.end())
            {
                mp[x]=1;
                v.push_back(x);
            }
            if(mp.find(y)==mp.end())
            {
                mp[y]=1;
                v.push_back(y);
            }
            p.push_back(make_pair(x,y));
        }

        while(q--)
        {
            scanf("%d",&val);
            if(mp.find(val)==mp.end())
            {
                mp[val]=1;
                v.push_back(val);
            }
            if(mp.find(val)==mp.end())
            {
                mp[val]=1;
                v.push_back(val);
            }
            qu.push_back(val);
        }

        mp.clear();

        sort(v.begin(),v.end());
        for(int j=0; j<v.size(); j++)
        {
            mp[v[j]]=j+1;
            // cout<<v[i]<<" "<<m[v[i]]<<endl;
        }
//   for(it=mp.begin();it!=mp.end();it++){
//    cout<<it->first<<" "<<it->second<<endl;
//   }

        for(int j=0; j<p.size(); j++)
        {
            arr[mp[p[j].first]]+=1;
            arr[mp[p[j].second]+1]+=-1;
        }

        for(int j=1; j<mx-1; j++)
        {
            arr[j]=arr[j-1]+arr[j];
            // cout<<arr[j]<<" ";
        }
        for(int j=0; j<qu.size(); j++)
        {
            printf("%d\n",arr[mp[qu[j]]]);
        }
    }

}
