#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if( (s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u') || (s[i]=='1')  || (s[i]=='3')  || (s[i]=='5') || (s[i]=='7')  || (s[i]=='9'))
        {
           count+=1; // || (s[i]=='2') || (s[i]=='4')|| (s[i]=='6') || (s[i]=='8') ||    (s[i]=='0')
        }
    }
    cout<<count;
    return 0;
}
