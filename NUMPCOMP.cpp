#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
            int res=-1;
        long int a,b,n;
        cin>>a>>b>>n;
        if(n%2==0){
                a=abs(a);
        b=abs(b);
            if(a>b){
                res=1;
            }
            else if(a==b){
                res=0;
            }
            else{
                res=2;
            }
        }
        else if(a==b){
            res=0;
        }
        else if(a>0){
            if(b>=0){
                if(a>b){
                    res=1;
                }
                else {
                    res=2;
                }
            }
            else{
                res=1;
            }
        }
        else if(a==0){
            if(b>0){
                res=2;
            }
            else{
                res=1;
            }
        }
        else if(a<0){
            if(b>=0){
                res=2;
            }
            if(b<0){
                    a=abs(a);
            b=abs(b);
                if(a>b){
                    res=2;
                }
                else{
                    res=1;
                }
            }
        }
        cout<<res;
    }
    return 0;
}

