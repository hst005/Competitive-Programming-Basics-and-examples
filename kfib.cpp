#include <iostream>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int a[n+1];
    for(long long int i=0;i<n+1;i++)
    {
        a[i]=0;
    if (i<=k)
        {
            a[i]=1;
        }
    if (i>k)
{   long long int sum=0;
        for(long long int j=0;j<k;j++)
            {
           sum=sum+a[i-j-1];
            }
            a[i]=sum;
   //         cout<<"sum is "<<sum<<endl;
            sum=0;
            }
    }
    cout<<(a[n]%1000000007);
/*
       for(int j=0;j<n;j++)
            {
    cout<<j<<"  "<<a[j]<<endl;
            }
*/
    return 0;
}
