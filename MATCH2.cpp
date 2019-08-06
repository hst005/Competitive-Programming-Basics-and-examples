#include <iostream>
#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll *a=new ll[n];
        ll *b=new ll[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        vector <ll> temp;
        for(ll i=0;i<n;i++){
            if(a[i]==b[i]){
                temp.push_back(i);
            }
        }
        for(ll i=0;i<m;i++){
            ll x,y,z;
            cin>>x>>y>>z;
            ll porig=temp.size();
            vector<ll>::iterator it;
            flag=-1;
            for(it=temp.begin();it!=temp.end();it++){
                if(*it<x){flag=0;}
            }
        }


    }
    return 0;
}
