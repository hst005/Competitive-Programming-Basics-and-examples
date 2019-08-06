#include<bits/stdc++.h>
#define ll long long
#define max 500001
#define mod 1000000007
#define tensix 1000000
using namespace std;
bool prime[max];

void sieve(){
    fill_n(prime,max,true);
    prime[0]=false;
    prime[1]=false;

    for(int i=2;i*i<=max;i++){
            if(prime[i]==true){
            for(int j=i*i;j<=max;j+=i){
                prime[j]=false;
                }
            }
    }
}
vector <ll> aro;
void checkfreq(ll *ar,ll n){
    aro.clear();
    sort(ar,ar+n);
    for(ll i=0;i<n;i++){
        if(ar[i]!=ar[i+1])
            aro.push_back(ar[i]);
      }
}
bool sumprime(ll n){
    for(int i=2;i<=n/2;i++){
        if(prime[i]==true){
            if(prime[n-i]==true){
                    if(((n-i)%2==0 && i%2==0 ) || ((n-i)%2==1 && i%2==1 ))
                return true;
            }
        }
    }
    return false;
}
ll war(vector <ll> aro){
    ll oro=aro.size();
    ll c=0;
    for(ll i=0;i<oro;i++){
           for(ll j=i+1;j<oro;j++){

            ll temp=aro[i]^aro[j];
            if( sumprime(temp)==true){
              c++;
                }
           }
    }

return c;
}

int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll *ar=new ll[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        checkfreq(ar,n);
        cout<<war(aro)<<endl;
    }
    return 0;
}
