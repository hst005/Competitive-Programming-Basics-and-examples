#include <iostream>
#define ll long long
#define mod 1000000007
#include<math.h>
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,te;
        cin>>n;
        te=n;

        ll *ar=new ll[10];
        int j=0;
        while(te!=0){
            ar[j]=te%10;
            j++;
            te=te/10;
        }
        for(int i=0;i<(sizeof(ar)/sizeof(ar[0]));i++){
            cout<<ar[i]<<endl;
        }
        /*
        ll ans=0;
        for(int i=0;i<j;i++){
            ll temp=0;
            int coun=0;
            for(int k=i;i<j;k++){
                temp+=ar[k]*pow(10,j-i+1);
            }
            for(int k=0;k<i;k++){
                temp+=ar[k]*pow(10,j-i-k+1);
            }
            ans+=temp*pow(10,j*(j-1));
        }
        cout<<ans<<endl;
        */
    }
    return 0;
}
