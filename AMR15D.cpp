#include <iostream>
#define ll long long
#define forl(i,a,b) for(long long i=a;i<b;i++)
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll *ar=new ll[n];
    forl(i,0,n){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    ll q;
    cin>>q;
    ll k[q];
    forl(i,0,q){
        cin>>k[i];
    }
    forl(i,0,q){
        ll temp=k[i]+1;
        ll ud=ceil((double)n/(double)temp);
        ll ans=0;
        forl(j,0,ud){
            ans+=ar[j];
        }
        cout<<ans<<endl;
    }
    return 0;
}
