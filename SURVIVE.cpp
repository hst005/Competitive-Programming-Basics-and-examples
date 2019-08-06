#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,s;
        cin>>n>>k>>s;
        float m=((float)(k*s)/n);

        int z=ceil(m);
        if(z<=6){ cout<<z; }
        else if(z%6==1 ) { cout<<-1;}
        else if(z<13) { cout<<z+1;}
        else if(z<19) { cout<<z+2;}
        else  {
                int y;
                y=z/6;
        cout<<z+y-1;}


    }
    return 0;
}
