#include<bits/stdc++.h>
using namespace std;
int main(){

int test,q=1;
string arr,store;
char temp[100];
cin>>test;
cin.ignore();
while(test--){
    stack<string>backs;
    stack<string>forwards;
    printf("Case %d:\n",q);
    backs.push("http://www.lightoj.com/");
    while(scanf("%s",&temp)){
    if(strcmp(temp,"BACK")==0){
        if(backs.size()==1){
            cout<<"Ignored"<<endl;
        }
        else{
        store=backs.top();
        forwards.push(store);
        backs.pop();
        cout<<backs.top()<<endl;
        }
    }
    else if(strcmp(temp,"FORWARD")==0){
             if(forwards.size()==0){
            cout<<"Ignored"<<endl;
            }
            else{
            store=forwards.top();
            backs.push(store);
            forwards.pop();
            cout<<store<<endl;
            }

    }
    else if(strcmp(temp,"VISIT")==0){
             cin>>arr;
        backs.push(arr);
        cout<<arr<<endl;
        while(!forwards.empty()){
            forwards.pop();
        }
    }
    else if(strcmp(temp,"QUIT")==0){
       break;
    }
}
q++;
}




}
