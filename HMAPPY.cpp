#include <iostream>
#include<bits/algorithmfwd.h>
#include<bits/stdc++.h>
#define lmax LONG_MAX
#define lmin LONG_MIN
#define ll long long
#define ld long double
using namespace std;

bool exists(ll *a,ll *b,ll ans,ll n,ll m){

    for(ll i=0;i<n;i++){
        if(ans<(a[i]*b[i])){
            ll temp=(ll)ceil((ld)((a[i]*b[i]-ans)/(ld)b[i]));
            m-=temp;
        }
    }
    if(m>=0)
        return true;
    return false;

}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll maxval=lmin;
    ll *a=new ll[n];
    ll *b=new ll[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
        maxval=max(maxval,a[i]*b[i]);
    }
    ll first=0;
    ll last=maxval;

    ll ans=maxval;
    ll mid;
    while(first<=last){
        mid=(first+last)/2;
        if(exists(a,b,mid,n,m)){
            ans=mid;
            last=mid-1;
        }
        else{
            first=mid+1;

        }
    }
    cout<<ans;
    return 0;
}
