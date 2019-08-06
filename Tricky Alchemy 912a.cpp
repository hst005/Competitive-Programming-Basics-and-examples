#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,d,e;
    cin>>a>>b;
    //cout<<endl;
    cin>>c>>d>>e;
    long long int blreq,yreq,fin;
    blreq=(d+3*e)-b;
    yreq=(2*c+d)-a;
    fin=blreq+yreq;
    if(fin>=0)
    {
    cout<<fin;
    }
    else {
            cout<<0;
    }
    return 0;
}
