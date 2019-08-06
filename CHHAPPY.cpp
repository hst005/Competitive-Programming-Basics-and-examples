#include <iostream>
#define ll long long
#define forl(i,a,b) for(long long i=a;i<b;i++)
#include<bits/stdc++.h>
#define pb push_back

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
     //   ll a[n],temp[n];
       map <ll , vector <ll>> inp;
        forl(i,0,n){
            ll pl;
            cin>>pl;
            inp[pl].push_back(i+1);
        }
         map <ll , vector <ll>> ::iterator pt;
       /* for(pt=inp.begin();pt!=inp.end();pt++){
            cout<<pt->first<<"        ";
            vector <ll>::iterator ptrv;
            for(ptrv=pt->second.begin();ptrv!=pt->second.end();ptrv++){
                    cout<<*ptrv<<" ";

            }
            cout<<endl;

         }*/
         //ll a,b;
         //cin>>a>>b;
         //cout<<inp[a][b];
         ll flag=0;
         for(pt=inp.begin();pt!=inp.end();pt++){
            if(pt->second.size()<=1){
                continue;
            }
            else{
                vector <ll>::iterator ptrv;int c=0;
                for(ptrv=pt->second.begin();ptrv!=pt->second.end();ptrv++){
                   if(inp.count(*ptrv)>0){
                    c++;
                   }
                   if(c>1){
                    flag=1;
                    break;
                   }

                }
                if(flag==1){
                    break;
                }
            }


         }
         if(flag==1){
            cout<<"Truly Happy"<<endl;
         }
         else{
            cout<<"Poor Chef"<<endl;
         }


    }

    return 0;
}
