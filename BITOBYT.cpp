#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) {
            result = (result*base);
        }
        base = (base * base) ;
        power = power / 2;
    }
    return result;
}

int main()
{
    ll t;
    cin>>t;
//int i=0;
    while(t--){
        ll n;
        cin>>n;
  //      cout<<i<<" ";
    //    n=i;
        ll div=ceil(n/26);
        ll mod=n%26;
        ll c=fast_power(2,div);
        if (n<=2){
            cout<<"1 0 0"<<endl;
        }
        else if(mod==2 || mod==1 ){
            cout<<c<<" 0 0"<<endl;
        }
        else if(mod<=10 && mod!=0){
            cout<<"0 "<<c<<" 0"<<endl;
        }
        else if(mod==0){
            cout<<"0 0 "<<fast_power(2,div-1)<<endl;
        }

        else{
            cout<<"0 0 "<<c<<endl;
        }
//i++;
    }
    return 0;
}
