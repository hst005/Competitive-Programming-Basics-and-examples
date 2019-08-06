#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool sortcol(const vector<long long int> v1,const vector<long long int> v2)
{
    return v1[1]<v2[1];
}
int main()
{
    long int n;
    long long int d;
    cin>>n>>d;
    vector <long long int> ar; //[n][2]
    for(long int i=0;i<n;i++)
    {
        for(int j=1;j>=0;j--)
        {
            cin>>ar[i][j];
        }
    }
    sort(ar.begin(),ar.end(),sortcol);
    for(long int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
    cout<<ar[i][j];
        }
    }

    return 0;
}
