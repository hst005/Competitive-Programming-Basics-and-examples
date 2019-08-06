#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
            ll ar[32];
            for(int i=0;i<32;i++){
                ar[i]=0;
            }
            ll d;
            cin>>d;
            for(int i=0;i<d;i++){
                int day,pr;
                cin>>day>>pr;
                for(int j=day;j<32;j++){
                    ar[j]+=pr;
                }
            }
            ll q;
            cin>>q;
            while(q--){
                int dy,qu;
                cin>>dy>>qu;
                if(ar[dy]>=qu){
                    cout<<"Go Camp"<<endl;
                }
                else{
                    cout<<"Go Sleep"<<endl;
                }
            }

    }
    return 0;
}
