#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct swaps{
int p1,p2;
};

void swap(int &x,int &y){
    int t=x;
    x=y;
    y=t;
}
int main()
{
    //int x=3,y=5;
    //swap(x,y);
    //cout<<x<<y;
    int t;
    cin>>t;
    while(t--){
            ll n,x,s;
            cin>>n>>x>>s;
            int flag=0;
            //ll work[n];
            /*for(int i=0;i<n;i++){
                work[i]=0;
            }
            work[x]=1;*/
            //swaps in[s];
            ll a1,a2,ans=x;
            for(int i=0;i<s;i++){
                //cin>>in[i].p1>>in[i].p2;
                ll t1,t2;
                cin>>t1>>t2;
                if(t1==ans || t2==ans){
                if(t1==ans){
                    ans=t2;
                }
                else{
                    ans=t1;
                }
                }

               /* if(in[i].p1==x || in[i].p2==x){
                    flag=1;
                }*/
            }
           /* if(flag==0){
                cout<<x<<endl;
                continue;
            }*/
            /*ll ans=x;;
            for(int i=first;i<s;i++){
                swap(work[in[i].p1],work[in[i].p2]);
                if(work[in[i].p1]==1){
                    ans=work[in[i].p1];
                }
                else if(work[in[i].p2]==1){
                    ans=work[in[i].p2];
                }
            }*/
            cout<<ans<<endl;
        }
    return 0;
}
