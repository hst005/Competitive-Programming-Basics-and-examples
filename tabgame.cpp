#include <iostream>
#define ll long long
#include<bits/stdc++.h>

using namespace std;

void game(string m,string n,ll **dp){

    ll mlen=m.length();
    ll nlen=n.length();

    for(ll i=1;i<=nlen;i++){
        if(n[i-1]=='1'){
            dp[i][0]=1;
        }
        else{
            dp[i][0]=0;
        }
    }

    for(ll i=1;i<=mlen;i++){
        if(m[i-1]=='1'){
            dp[0][i]=1;
        }
        else{
            dp[0][i]=0;
        }
    }


    for(ll i=1;i<=nlen;i++){
        for(ll j=1;j<=mlen;j++){
            if(dp[i-1][j]==0 || dp[i][j-1]==0 || dp[i-1][j]==3 || dp[i][j-1]==3){
                dp[i][j]=2;
            }

            else{
                dp[i][j]=3;
            }
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string ans="";
        string m,n;
        cin>>m>>n;
        ll q;
        cin>>q;
            ll mlen=m.length();
            ll nlen=n.length();

            ll **dp=new ll*[nlen+1];
            for(ll i=0;i<=nlen;i++){
                    dp[i]=new ll[mlen+1];
                    for(ll j=0;j<=mlen;j++){
                        dp[i][j]=-1;
                    }
                }
        game(m,n,dp);
        while(q--){
            ll x,y;
            cin>>x>>y;
            if (dp[x][y]==2){
                ans+="1";
            }
            else{
                ans+="0";
            }
        }
        for(ll i=0;i<=nlen;i++){
           delete [] dp[i];
        }

        delete [] dp;
        cout<<ans<<endl;
    }

    return 0;
}
