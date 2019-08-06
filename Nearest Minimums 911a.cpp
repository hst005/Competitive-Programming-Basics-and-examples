#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    long long int ar[n],br[n];
    vector <int> v1;
    vector <int> v2;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        br[i]=ar[i];

    }
        sort(br,br+n);
    long long int what;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==br[0])
        {
            v1.push_back(i);
        }
    }
    sort(v1.begin(),v1.end());
    /*
    cout<<v1[1]<<endl<<v1[0]<<endl;;
    cout<<(v1[1]-v1[0]);
      */
      for(int i=1;i<v1.size();i++)
      {
          long int z;
          z=v1[i]-v1[i-1];
          v2.push_back(z);
        }
        sort(v2.begin(),v2.end());
        cout<<v2[0];
          return 0;
}
