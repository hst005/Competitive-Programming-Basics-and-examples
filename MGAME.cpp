#include <iostream>
#include<math.h>
#define ll unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        if(p>=1 && n<=2){
            ll ans;
        ans=pow(p,3);
            cout<<ans<<endl;
        }
        else {
            ll c;
            c=p-(n%((n/2)+1));
            ll ans;
            ans=pow(c,2)+(p-n)*c+(p-n)*(p-n);
            cout<<ans<<endl;
        }
    }
    return 0;
}
