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
        ll n;
        cin>>n;
        ll *a=new ll[n];
        ll f0=0,f1=0,fn1=0,fo=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                f0++;
            }
            else if(a[i]==1){
                f1++;
            }
            else if(a[i]==-1){
                fn1++;
            }
            else{
                fo++;
            }
        }
        if(fo>1){
            cout<<"no"<<endl;
        }
        else{
            if(fo!=0 && fn1!=0){
                cout<<"no"<<endl;
            }
            else if(fn1>1 && f1==0){
                cout<<"no"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }
        }
    }
    return 0;
}
