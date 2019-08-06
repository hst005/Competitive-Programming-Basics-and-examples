#include <iostream>
#include<math.h>
using namespace std;

int main()
{

    int a,c,d,b=0;
    int sum=0;
cin>>a;
d=a;
    while(d!=0)
    {
        sum=sum+1;
        d=d/10;

    }
    sum=sum-1;
     while(a!=0)
    {
        c=a%10;

        b=b+c*(pow(10,sum));

        sum=sum-1;
        a=a/10;

    }
    cout<<b+1;

    return 0;
}
