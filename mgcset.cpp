#include <iostream>
#include<bits/stdc++.h>
#define max5 5005001
#define ll long long
using namespace std;
/*void sieve(bool *a,int m){
    for(int i=m;i<=max5;i=i+m){
        a[i]=true;
    }
}*/
/*
long long int subdivm (int *ar,int n ,int m){
long long int coun=0,sum=0;
*/
/*if(n<=0){
    return 0;
}*/
/*long long t2=ar[n-1]/m;
long long *t=new long long[t2+2];
t[0]=0;
long long int j=1;
for(long long int i=m;i<=ar[n-1];i=i+m){
    ar[j]=i;
    j++;
}
*/
/*    for(int i=0;i<n;i++){
        long long int temp=sum;
        sum+=ar[i];
        for(int j=i+1;j<n;j++){
            sum=sum+ar[j];
            if(sum%m==0){
            coun++;
        }
        }

    sum=temp;
    }

return coun;
}*/
/*
long long int subdivm (int *ar,int n ,int m,int modl){
if(n==0){
    return 0;
}

ll small=subdivm(ar+1,n-1,m,(modl+ar[0]%m)%m);

if(ar)



}
*/
long long int subdivm (int *ar,ll n ,ll m){
ll c=0;
for(ll i=0;i<n;i++){
    if(ar[i]%m==0){
        c++;
    }
}
ll ans=0;
if(c>0){
ans=pow(2,c)-1;
}
return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
            //bool a[max5];
            //fill_n(a,max5,false);

        int n,m;
        cin>>n>>m;
        //sieve(a,m);
        int *ar=new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        cout<<subdivm(ar,n,m)<<endl;

        delete [] ar;
    }

    return 0;
}
