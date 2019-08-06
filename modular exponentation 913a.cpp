#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int n,m,exp;
    cin>>n>>m;
    exp=pow(2,n);
    cout<<(m%exp);
    return 0;
}
