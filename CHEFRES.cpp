#include <iostream>
#include<bits/stdc++.h>
#define max0 100000000
#define ll long long
using namespace std;
/*

// yeh waala comment 30 point hai
bool ar[max0];
void init(){
for(ll i=0;i<max0;i++){
    ar[i]=false;
}
}

int main()
{
   // cout<<size_t;
    init();

    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll maxval=0;
        for(ll i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            for(ll j=a;j<b;j++){
                ar[j]=true;
            }
            if(b>maxval){
                maxval=b;
            }
        }
        for(ll j=0;j<m;j++){
            ll p;
            cin>>p;
            if(ar[p]==true){
                cout<<"0"<<endl;
            }
            else if(p>=maxval){
                cout<<"-1"<<endl;
            }
            else{
                ll ans=0;
                ll temp=p;
                while(ar[temp]!=true){
                    ans++;
                    temp++;
                }
                cout<<ans<<endl;
            }
        }

    }
    return 0;
}
*/
size_t ar[max0];
void init(){
for(ll i=0;i<max0;i++){
    ar[i]=0;
}
}

int main()
{
   // cout<<size_t;
    init();

    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll maxval=0;
        for(ll i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            for(ll j=a;j<b;j++){
                ar[j]=1;
            }
            if(b>maxval){
                maxval=b;
            }
        }
        for(ll j=0;j<m;j++){
            ll p;
            cin>>p;
            if(ar[p]==1){
                cout<<"0"<<endl;
            }
            else if(p>=maxval){
                cout<<"-1"<<endl;
            }
            else{
                ll ans=0;
                ll temp=p;
                while(ar[temp]!=true){
                    ans++;
                    temp++;
                }
                cout<<ans<<endl;
            }
        }

    }
    return 0;
}
