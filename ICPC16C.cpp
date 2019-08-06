#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll d;
        cin>>d;
        cout<<d+1-(9*(d/9))<<endl;
    }
    return 0;
}
