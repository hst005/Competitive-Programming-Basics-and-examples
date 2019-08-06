#include <iostream>
#define ll long long
#define forl(i,a,b) for(long long i=a;i<b;i++)
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll what=floor(((double)n)/((double)2));
        if(k>what){
            cout<<"-1"<<endl;
        }
        else if(k==0){
            forl(j,0,n){
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
        else{
            ll temp=k+1;
            forl(i,0,n){
                cout<<temp<<" ";
                if(temp<2*k){
                    temp++;
                }
                else if(temp==2*k){
                    temp=1;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
