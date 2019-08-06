#include <iostream>
#include<bits/stdc++.h>
#define kk 525
using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int six;
    int f=0,s=0,g=-1;
    int five=kk;
    int numb,coun=0;;
    numb=ceil(n/kk);
    int l=0,r=kk;
    while(f==0 && coun<=numb){
        int res;
        if(r<n){
            cout<<"1 "<<r<<endl;
               cin>>res;
        }
        else{
            cout<<"1 "<<n<<endl;
            r=n;

            cin>>res;
            if(res==1){
                cout<<"2"<<endl;
            }
            break;
        }
        if(res==0){
            l+=kk;
            r+=kk;

            s++;
        }
        else{

            s=s+c;
            f=1;
            cout<<"2"<<endl;
        }
        coun++;

    }

    //int xyz=0;

    for(int i=l+1;i<=r;i++){
        cout<<"1 "<<i<<endl;
        int res;
        cin>>res;
        if(res==1){
            cout<<"2"<<endl;
            cout<<"3 "<<i<<endl;
      //      xyz=1;
            break;
        }
    }
    /*
    if(xyz==0){
        cout<<"3 -1"<<endl;
    }*/

    return 0;
}
