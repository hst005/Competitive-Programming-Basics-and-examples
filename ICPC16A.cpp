#include <iostream>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1-x2>0 && y1==y2){
            cout<<"left"<<endl;
        }
        else if(x1-x2<0 && y1==y2){
            cout<<"right"<<endl;
        }
        else if(x1==x2 && y1-y2>0){
            cout<<"down"<<endl;
        }
        else if(x1==x2 && y1-y2<0){
            cout<<"up"<<endl;
        }
        else{
            cout<<"sad"<<endl;
        }


    }
    return 0;
}
