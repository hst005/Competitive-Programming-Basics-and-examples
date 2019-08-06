#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ar[n][n];
        ll fin=n*n;
        ll inti=1;
        int inc1=1;
        int ii=1;
        for(int i=0;i<n;i++){
            ar[0][i]=inti;
            inti=inti+inc1;
            inc1++;
        }
        ll temp=1;
        for(int i=0;i<n-1;i++){
                int inc2;
                if(2+i>n){
                    inc2=i+2-temp;
                    temp++;
                }
                else{
                    inc2=i+2;
                }
                int flag=1;
            for(int j=1;j<n;j++){
                ar[j][i]=ar[j-1][i]+inc2;
                if(flag==0){
                    inc2--;
                }
                else if(inc2==n ){

                    flag=0;
                }
                else{
                    inc2++;
                }
            }

        }
        int dec=n;
        for(int i=1;i<n;i++){
            ar[i][n-1]=ar[i-1][n-1]+dec;
            dec--;
        }
       /* if(n%2==0){
            ar[n/2][n/2]=ar[(n/2)-1][n/2]+n;
        }
        else{
            ar[n/2+1][n/2]=ar[(n/2)][n/2]+n;

        }*/
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
