#include<bits/stdc++.h>
using namespace std;
int main(){
int test,n,m,q=1,x;
char temp[100];
cin>>test;
while(test--){

    deque<int>dq;
    cin>>n>>m;
    cout<<"Case "<<q<<":"<<endl;
    while(m--){
        //getchar();
        scanf("%s",temp);
        if(strcmp(temp,"pushLeft")==0){
            cin>>x;
            if(dq.size()>=n){
            cout<<"The queue is full"<<endl;
            }
            else{
            dq.push_front(x);
            cout<<"Pushed in left: "<<dq.front()<<endl;
            }
        }
        else if(strcmp(temp,"pushRight")==0){
             cin>>x;
            if(dq.size()>=n){
            cout<<"The queue is full"<<endl;
            }
            else{
            dq.push_back(x);
            cout<<"Pushed in right: "<<dq.back()<<endl;
            }
        }
        else if(strcmp(temp,"popLeft")==0){
               if(dq.size()==0){
            cout<<"The queue is empty"<<endl;
             }
            else{
            cout<<"Popped from left: "<<dq.front()<<endl;
            dq.pop_front();
            }
        }
        else if(strcmp(temp,"popRight")==0){
               if(dq.size()==0){
            cout<<"The queue is empty"<<endl;
            }
        else{
           cout<<"Popped from right: "<<dq.back()<<endl;
           dq.pop_back();
        }
        }

    }
 q++;
}





}
