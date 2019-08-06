#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    int t;
    cin>>t;
    ll two=1;
    vector <ll> vbase,vsum;
    vbase.push_back(two);
    for(int j=0;j<32;j++){
        two*=2;
        vbase.pb(two);
    }
    for(int i=0;i<vbase.size();i++){
        for(int j=i+1;j<vbase.size();j++){
            vsum.pb(vbase[i]+vbase[j]);
        }
    }
    sort(vsum.begin(),vsum.end());
    while(t--){
        ll n;
        cin>>n;
       vector<ll>::iterator it;
       for(it=vsum.begin();it!=vsum.end();it++){
        if(it!=vsum.begin()){
            if(*it>=n){
                ll x,y;
                x=n-*(it-1);
                y=(*it)-n;
                cout<<min(x,y)<<endl;
                break;
            }

        }
         if(it==vsum.begin()){
            if(*it>=n){
                cout<<*it-n<<endl;
                break;
            }
         }
       }

    }
    return 0;
}
