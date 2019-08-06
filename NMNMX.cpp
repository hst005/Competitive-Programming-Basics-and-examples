#include <iostream>

using namespace std;

long long subseqk(int *ar,int n,int k){

}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int *ar=new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[n];
        }

        cout<<subseqk(ar,n,k);

        delete [] ar;
    }
    return 0;
}
