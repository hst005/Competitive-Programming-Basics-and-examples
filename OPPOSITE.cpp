#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
         ll m;
         cin>>m;
         if(m==1){
            ll a;
            cin>>a;
            cout<<"YES"<<endl<<a<<endl;
         }
         ll temp=m/2;
         if(m%2==0){
            ll *a1=new ll[temp];
            ll *a2=new ll[temp];
            for(ll i=0;i<temp;i++){
                cin>>a1[i];
            }
            for(ll i=0;i<temp;i++){
                cin>>a2[i];
            }
            for(ll i=0;i<=temp;i++){
                if(i==temp){
                    cout<<"YES"<<endl;
                    for(ll j=0;j<temp;j++){
                        cout<<a1[j]<<" ";
                    }
                    for(ll j=0;j<temp;j++){
                        cout<<a2[j]<<" ";
                    }
                    cout<<endl;
                    break;
                }
                if(a1[i]==a2[i]){
                    if(a1[i]!=-1){
                        continue;
                    }
                    else{
                        a1[i]=1;
                        a2[i]=1;
                    }
                }
                else if(a1[i]==-1 || a2[i]==-1){
                    if(a1[i]==-1){
                        a1[i]=a2[i];
                    }
                    else{
                        a2[i]=a1[i];
                    }
                }
                else {
                    cout<<"NO"<<endl;
                    break;
                }
            }


         }
         if(m%2==1){
             ll mid;
            ll *a1=new ll[temp];
            ll *a2=new ll[temp];
            for(ll i=0;i<temp;i++){
                cin>>a1[i];
            }
            cin>>mid;
            for(ll i=0;i<temp;i++){
                cin>>a2[i];
            }
                /*
            ll mid;
            ll *a1=new ll[temp];
            ll *a2=new ll[temp];
            for(ll i=0;i<temp;i++){
                cin>>a1[i];
            }
            cin>>mid;
            for(ll i=0;i<temp;i++){
                cin>>a2[i];
            }
            for(ll i=0;i<=temp;i++){
                if(i==temp){
                    cout<<"YES"<<endl;
                    for(ll j=0;j<temp;j++){
                        cout<<a1[j]<<" ";
                    }
                    if(mid==-1){
                        cout<<"1 ";
                    }
                    else{
                        cout<<mid<<" ";
                    }
                    for(ll j=0;j<temp;j++){
                        cout<<a2[j]<<" ";
                    }
                    cout<<endl;
                    break;
                }
                if(a1[i]==a2[i]){
                    if(a1[i]!=-1){
                        continue;
                    }
                    else{
                        a1[i]=1;
                        a2[i]=1;
                    }
                }
                else if(a1[i]==-1 || a2[i]==-1){
                    if(a1[i]==-1){
                        a1[i]=a2[i];
                    }
                    else{
                        a2[i]=a1[i];
                    }
                }
                else {
                    cout<<"NO"<<endl;
                    break;
                }

            }

*/
            cout<<"NO"<<endl;
         }

    }
    return 0;
}
