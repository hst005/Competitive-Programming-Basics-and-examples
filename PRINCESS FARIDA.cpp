#include <iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
long long farida(long long   *ar,int n){

long long int out[n];
//out[0]=0;
out[0]=ar[0];
out[1]=max(ar[1],ar[0]);
  if(n>1){
out[2]=max(out[1],ar[2]+out[0]);

for(int i=3;i<n;i++){
   //int t1=ar[i]+out[i-2];
    //ll t2=ar[i]+out[i-3];
   //int t3=max(t1,t2);
    out[i]=max(out[i-1],ar[i]+out[i-2]);
}
  }
return out[n-1];
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        cout<<"Case "<<i+1<<": "<<farida(ar,n)<<endl;
    }
    return 0;
}
