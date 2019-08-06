#include <iostream>
#define ll long long
#define forl(i,a,b) for(long long i=a;i<b;i++)
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n,q,k;
    cin>>n>>q>>k;
    ll ar[n];
    int flag=0;
    int max1=0;
    ll curr=0;
    forl(i,0,n){
        cin>>ar[i];
        if(flag==0 && ar[i]==1){
            flag=1;
            curr=1;
        }
        else if(flag==1 && ar[i]==1){
            curr++;
        }
        else if(flag==1 && ar[i]==0){
            flag=0;
        }
        if(curr>max1){
            max1=curr;
        }
    }
    string str;
    cin>>str;
    forl(i,0,q){
        if(str[i]=='?'){
                if(max1>k){
                    cout<<max1;
                }
                else{
                    cout<<k;
                }
        }
        else if(str[i]=='!'){

        }

    }
    return 0;
}
