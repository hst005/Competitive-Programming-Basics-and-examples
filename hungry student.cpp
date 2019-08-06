#include <iostream>

using namespace std;

int main()
{
 int t;
 cin>>t;
 if (t<101)
 {
 int a[t];
 for (int i=0;i<t;i++)
 {
    cin>>a[i];
 }
 for (int i=0;i<t;i++)
 {
     if (a[i]<101)
         {
     int m;
    m=a[i];
    if (m>0)
        {
            if (m==1 || m==2 || m==4 || m==5 || m==8 || m==11 )
                {
                    cout<<"NO";
                }
            else
            {
                cout<<"YES";
            }
        }
        cout<<endl;
 }
 }
 }
 return 0;
}
