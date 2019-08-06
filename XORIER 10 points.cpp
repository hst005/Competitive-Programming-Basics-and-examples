#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector <long long> even;
        vector <long long> odd;
       // long long *ar=new long long[n];
        for(int i=0;i<n;i++){
                int temp;
            cin>>temp;
                if(temp%2==0){
                    even.push_back(temp);
                  //  cout<<"e"<<endl;
                }
                else{

                    odd.push_back(temp);
                    //cout<<"o"<<endl;
                }
            //cin>>ar[i];
        }
        //cout<<endl;
        long long coun=0;
        for(long long i=0;i<odd.size();i++){

            for(long long j=i+1;j<odd.size();j++){
                long long temp=odd[i]^odd[j];
                if(temp>2){
                       // cout<<temp<<"  "<<odd[i]<<odd[j]<<endl;
                    coun++;
                }
            }
        }
        for(long long i=0;i<even.size();i++){

            for(long long j=i+1;j<even.size();j++){
                long long temp=even[i]^even[j];
                if(temp>2){

                       // cout<<temp<<"  "<<even[i]<<even[j]<<endl;
                    coun++;
                }
            }
        }

cout<<coun<<endl;
    }
    return 0;
}
