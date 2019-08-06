#include <iostream>
#define ll long long
#include<bits/algorithmfwd.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        double ans=(double)(2.0 + ((double)2*(n-1)*(k-1))/(double)k);
        cout<<setprecision(30)<<ans<<endl;
    }
    return 0;
}
