#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct wkr{
int c,t;
};
bool cmp(wkr a,wkr b){
return a.t<b.t;
}
int main()
{
    int n;
    cin>>n;
    wkr k[n];
    //int c[n],t[n];

    for(int i=0;i<n;i++){
        cin>>k[i].c;
    }

    for(int i=0;i<n;i++){
        cin>>k[i].t;
    }

    sort(k,k+n,cmp);
/*    for(int i=0;i<n;i++){
        cout<<k[i].c<<"  "<<k[i].t<<endl;
    }
*/
int min1=100001,min2=100001,min3=100001;
    for(int i=0;i<n;i++){
        if(k[i].t==1){
            if(min1>k[i].c){
                min1=k[i].c;
            }
        }
        else if(k[i].t==2){
            if(min2>k[i].c){
                min2=k[i].c;
            }
        }

        else if(k[i].t==3){
            if(min3>k[i].c){
                min3=k[i].c;
            }
        }

    }

    if(min1+min2<min3){
        cout<<min1+min2;
    }
    else {
        cout<<min3;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
