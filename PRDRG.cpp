#include <iostream>
#define ll long long
#define forl(i,a,b) for(long long i=a;i<b;i++)
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll t;
   cin>>t;
    //while(t--){
       // ll n;
        //cin>>n;
        int num[25];
        num[0]=1;
        num[1]=1;
       // num[2]=3;
       // num[3]=5;
        //num[4]=11;
        /*num[5]=21;
        num[6]=43;
        num[7]=85;
        num[8]=171;
        num[9]=341;
        num[10]=;
        num[11]=;
        num[12]=;
        num[13]=;
        num[14]=;
        num[15]=;
        num[16]=;
        num[17]=;
        num[18]=;
        num[19]=;
        num[20]=;
        num[21]=;
        num[22]=;
        num[23]=;
        num[24]=;
        */
        ll sum=2;
        for(int i=2;i<25;i++){
            int flag=0;
            if(sum%2==0){
                sum++;
                flag=1;
            }
            num[i]=sum;
            if(flag==1){
                sum--;
            }
            sum+=num[i];
        }

    /*    for(int i=0;i<25;i++){
            cout<<setprecision(0)<<num[i]<<endl;
        }
*/
        while(t--){
            ll n;
            cin>>n;
            cout<<setprecision(0)<<num[n-1]<<" ";

            cout<<setprecision(0)<<fixed<<pow(2,n)<<" ";

        }

   // }<<setprecision(0) 20 10 11 12 13 14 15 16 19 20 21
    return 0;
}
