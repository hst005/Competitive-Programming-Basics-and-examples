#include <iostream>
#define ll long long
using namespace std;
struct Date
{
    int d, m, y;
};

int leap(Date d)
{
    int years = d.y;
    if (d.m <= 2)
        years--;

    return years / 4 - years / 100 + years / 400;
}
/*
ll get(Date d1, Date d2, int *m,int yd, ll *sum)
{
    ll ans=0;
    if(d1.d>d2.d){
        ans+=m[d1.m]-(d1.d-d2.d)+1;
        d2.m--;
    }
    else{
        ans+=d2.m-d1.m;
    }
    if(d1.m>d2.m){
        ans+=yd-(d1.m-d2.m);
        d2.y--;
    }
    else{
        ans+=yd-sum[d1.m]+sum[d2.m-1];
    }
    ans+=(d1.y-d2.y)*yd;
    return ans;
}*/
ll get(Date d1, Date d2, int *m,int yd, ll *sum,ll n)
{
    ll ans=0;
    //ans+=d2.d-d1.d;
    ans+=(d2.y-d1.y+1)*yd;
    if(d1.m>=2){
        ans-=sum[d1.m-2];
    }
    ans-=d1.d-1;
    ans-=(yd-sum[d2.m-1]);
    ans-=m[d2.m-1]-d2.d;
    return ans+leap(d1)+leap(d2)-1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int m[n];
        ll sum[n];
        ll yd=0;
        for(int i=0;i<n;i++){
            cin>>m[i];
            if(i==0){
                sum[0]=m[0];
            }
            else{
                sum[i]=sum[i-1]+m[i];
            }
            yd+=m[i];
        }

        /*ll by,bm,bd,cy,cm,cd;
        cin>>by>>bm>>bd>>cy>>cm>>cd;
        */
        Date b,c;
        cin>>b.y>>b.m>>b.d>>c.y>>c.m>>c.d;
        ll nod;
        nod=get(b,c,m,yd,sum,n);
        cout<<nod+1<<endl;

    }

    return 0;
}
