#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int k,n,s,p;
   cin>>k>>n>>s>>p;
   int m;
   m=ceil(k*n/(s*p));
   int l;
   //l=ceil(k/p);
   cout<<m;
    return 0;
}
