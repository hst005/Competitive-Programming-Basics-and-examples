#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--){
	 ll n,k,ans=0;
	 cin>>n>>k;
	 ll in[n];
	 for(ll i=0;i<n;i++){
        cin>>in[i];
	 }

	  if(in[0]>k && in[0]%k==0)
	  {
	  	ans=(in[0]/k)-1;
	  }
	  else if(in[0]>k){
            ans=in[0]/k;
    }
	  for(ll i=0;i<n-1;i++){
        if(in[i+1]-in[i]>k &&(in[i+1]-in[i])%k==0){
            ans+=(((in[i+1]-in[i])/k)-1);
        }
        else if(in[i+1]-in[i]>k){
	  		ans+=(in[i+1]-in[i])/k;
        }
	  }
	  cout<<ans<<endl;


	}
	return 0;
	}
