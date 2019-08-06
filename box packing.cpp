#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n>=1 && n<5001)
    {
    vector <long long int> v1(n);

    for (int i=0;i<n;i++)
        {
            long long int m=0;
            cin>>m;
            v1[i]=m;
        }
        vector <long long int>::iterator it=v1.begin();
/*
    for (it=v1.begin();it!=v1.end();it++)
        {
           cout<<*it;
        }
*/
sort(v1.begin(),v1.end());
int count=1;

 for (int i=1;i<n;i++)
{

            if (v1[i-1]==v1[i])
            {

                count+=1;
            }
        }

    cout<<count;
    }
    return 0;
}
