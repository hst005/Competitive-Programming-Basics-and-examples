#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;


        for (int i=0;i<t;i++)
            {
                int n,k;
                cin>>n;
                cin>>k;
                vector <int> v1;
                int temp;
                temp=n*k;
                vector <int> v2;
                for(int j=0;j<n;j++)
                {
                    int m;
                    cin>>m;
                    v1.push_back(m);
                }

                for(int j=0;j<k;j++)
                {
                    v2.insert(v2.end(),v1.begin(),v1.end());
                }
                for(int j=0;j<temp;j++)
                {
                    cout<<v2[j];
                }
            }

return 0;
}
