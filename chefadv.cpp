#include <iostream>
#define ll long long
using namespace std;

int main()
{
    //ll knowx;
    int t;
    cin>>t;

    while(t--){
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        if((n==1 && m==1) || (n==2 && m==2) ){
            cout<<"Chefirnemo"<<endl;
            continue;

        }
        ll tx=n/x;
        ll ty=m/y;
        ll txd=n-(tx*x+1);
        ll tyd=m-(ty*y+1);
        ll txdd=n-((tx-1)*x+1);
        ll tydd=m-((ty-1)*y+1);

        //if(((txd==0 || txdd==0 || x==1) && (tydd==0 || tyd==0 || y==1)) || ((txd==1 || x==1) && (tyd==1|| y==1 )) || ((txdd==1 ||x==1) && (tydd==1 || y==1))){
         if (((txd==0 || txdd==0 || (x==1 && n>=2)) && (tyd==0 || tydd==0 || (y==1 && m>=2) )) || ((txd==1 || txdd==1 || (x==1&& n>=2)) && (tyd==1 || tydd==1 || (y==1 && m>=2) ))){
                    cout<<"Chefirnemo"<<endl;

        }
        else{
            cout<<"Pofik"<<endl;
        }

    }
   return 0;
}


/*#include <iostream>
#define ll long long
using namespace std;

int main()
{
    //ll knowx;
    int t;
    cin>>t;
    while(t--){
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        if((n==1 && m==1) || (n==2 && m==2) ){
            cout<<"Chefirnemo"<<endl;
            continue;

        }
        ll tx=n/x;
        ll ty=m/y;
        ll txd=n-(tx*x+1);
        ll tyd=m-(ty*y+1);
        /*ll txdd=n-((tx-1)*x+1);
        ll tydd=m-((ty-1)*y+1);
        ll txddd=n-((tx-2)*x+1);
        ll tyddd=m-((ty-2)*y+1);*/
       // if((txd==0 && tyd==0) || (txd==1 && tyd==1) || (txdd==0 && tydd==0) || (txdd==1 && tydd==1)|| (txddd==0 && tyddd==0) || (txddd==1 && tyddd==1)){
    /*    if((txd==0 && tyd==0) || (txd==1 && tyd==1) ){
            cout<<"Chefirnemo"<<endl;

        }
        else{
            cout<<"Pofik"<<endl;
        }

    }
   return 0;
}
*/
