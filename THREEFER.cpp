#include <iostream>
#define ll long long
#define forl(i,a,b) for(long long i=a;i<b;i++)
#include<bits/stdc++.h>

using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll x,y,z;
        int flag=0;
        cin>>x>>y>>z;
        if(x==(y+z) || y==(x+z) || z==(x+y)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}
