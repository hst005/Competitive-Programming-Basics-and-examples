#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll p1,p2,k;
        cin>>p1>>p2>>k;
        ll a1=(p1+p2)/k;
        ll mod=(p1+p2)%k;
        if(mod==0){
            if(a1%2==1){
                cout<<"COOK"<<endl;
            }
            else{
                cout<<"CHEF"<<endl;
            }
        }
        else{
            if(a1%2==1){
                cout<<"COOK"<<endl;
            }
            else{
                cout<<"CHEF"<<endl;
            }
        }
        }
    return 0;
}
