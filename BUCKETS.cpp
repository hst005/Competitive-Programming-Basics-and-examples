#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    ll ar[n][k];
    ll sum[k];
    ll tsum=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<k;j++){
            cin>>ar[i][j];
            tsum+=ar[i][j];
        }
    }
   /* for(ll i=0;i<n;i++){
        for(ll j=0;j<k;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }*/
    for(int i=0;i<k;i++){
        sum[i]=0;
    }
    for(ll i=0;i<k;i++){
        for(ll j=0;j<n-1;j++){
            if(ar[j][i]>0){
                    sum[i]=1;

            }
            else{
                if(ar[j+1][i]==0){
                    sum[i]=0;
                }
            }
        }
        //cout<<sum[i]<<endl;
    }
    float ans[k];
    for(int i=0;i<k;i++){
        ans[i]=(float)((float)(sum[i]+ar[n-1][i])/(float)tsum);
        cout<<ans[i]<<" ";
       // cout<<sum[i]<<endl;
    }
    return 0;
}
