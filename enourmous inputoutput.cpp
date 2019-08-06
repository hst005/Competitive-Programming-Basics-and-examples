#include <iostream>

using namespace std;

int main()
{
   int n,k,x=0;
   cin>>n;
   cin>>k;
   if (n>0 && k<=10000000 && k>0){
   int ar[n];
   for (int i=0;i<n;i++)
   {
       cin>>ar[i];
       if (ar[i]<=1000000000){
       if(ar[i]%k==0)
       {
           x=x+1;
       }
       }
   }
   }
cout<<x;
}
