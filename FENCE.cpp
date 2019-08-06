#include <iostream>
#include<bits/stdc++.h>
#include<vector>
//correct
#define ll long long
#define pb push_back
using namespace std;
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.second!=b.second)
    return (a.second < b.second);
    else{
        return a.first<b.first;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        vector <pair<int,int >> tdown,tright;
        for(int i=0;i<k;i++){
            ll t1,t2;
            cin>>t1>>t2;
            tdown.pb(make_pair(t1,t2));
            tright.pb(make_pair(t1,t2));
        }
        sort(tright.begin(),tright.end());
        sort(tdown.begin(),tdown.end(),cmp);
        ll ans=0;
        ll a1=0,a2=0;
        if(k>0){
        ans=2;
        a1=2;
        for (int i=1; i<tdown.size(); i++){

                    if(tdown[i].second-tdown[i-1].second==0 && tdown[i].first-tdown[i-1].first==1){
                        continue;
                    }
                    else{
                        ans+=2;
                        a1+=2;
                      //  cout<<tdown[i].first<<" "<<tdown[i].second<<endl;
                    }


        }
        ans+=2;
        a2=2;
        for (int i=1; i<tright.size(); i++){

                    if(tright[i].first-tright[i-1].first==0 && tright[i].second-tright[i-1].second==1){
                        continue;
                    }
                    else{
                        ans+=2;
                        a2+=2;

                      //  cout<<tright[i].first<<" "<<tright[i].second<<endl;
                    }


        }
        }
            //cout<<ans<<" " <<a1<<"  "<<a2<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
/*
1
8 7 24
1 1 1 4 1 5 1 7 2 4 2 5 2 7
3 1 3 2 3 3
4 1 4 4 4 5 4 7
5 1 5 3 5 5
7 1 7 4 7 7
8 1 8 2 8 5 8 7*/
