#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++)
    {
        cin>>n[i];
        int m;
        m=n[i];
        string s[m];
        for(int j=0;j<m;j++)
        {
            cin>>s[j];
            if(s[j].length()>2)
            break;
        }
        for(int j=1;j<m-1;j++)
        {
            string t1,t2,t3;
            t1=s[j-1];
            t2=s[j];
            t3=s[j+1];

    }

}return 0;
}
