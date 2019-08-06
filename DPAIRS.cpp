#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    ll mina=INT_MAX,minb=INT_MAX;
    ll mininda=-1,minindb=-1,maxinda=-1,maxindb=-1;
    ll maxa=INT_MIN,maxb=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<mina){
            mina=a[i];
            mininda=i;
        }
        if(a[i]>maxa){
            maxa=a[i];
            maxinda=i;
        }
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        if(b[i]<minb){
            minb=b[i];
            minindb=i;
        }
        if(b[i]>maxb){
            maxb=b[i];
            maxindb=i;
        }
    }
    if(n<m){
          for(int i=0;i<m;i++){
            cout<<maxinda<<" "<<i<<endl;
          }
          for(int i=0;i<n;i++){
            if(i!=maxinda){
                cout<<i<<" "<<minindb<<endl;
            }
          }
    }
    else{
          for(int i=0;i<n;i++){
            cout<<i<<" "<<maxindb<<endl;
          }
          for(int i=0;i<m;i++){
            if(i!=maxindb){
                cout<<mininda<<" "<<i<<endl;
            }
          }

    }
    return 0;
}
