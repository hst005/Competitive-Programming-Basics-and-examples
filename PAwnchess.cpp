#include <iostream>
#include <stack>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        //int n;
        string s;
        //int n;
        //n=s.length();
        vector <int> w;
        vector <int> b;
        vector <int> s;
        for(int i=0;i<n;i++){
            if(s[i]=='W'){
                w.push(i);
            }
            else if(s[i]=='B'){
                b.push(i);
            }
            else if(s[i]=='.'){
                s.push(i);
            }
        }
        vector <int> check;
        int c2;
        int c=1,count=0;
        while(!c){
                if(count%2==0){
                    //white
                    //c2=0;

                    int k=w.pop();
                    if(s[k+1]=='B'){
                        check.push_back(k+1);
                        w.push(k+1);
                    }

                    else if(s[k+1]=='.'){
                        //check.push_back(k+1);
                        w.push(k+1);
                    }

                }
                else{
                    //black

                }
                if(b.empty()==true || w.empty()==true ){
                    c=0;
                }

        }




    }
    return 0;
}
