#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
	cin>>t;
	 int n[t],k[t];
	 string m[t];
	for(int i=0;i<t;i++)
	{
	    int flag=0;
	    cin>>n[i]>>k[i];
	    string s;
	    int upc=0,lowc=0;
	    cin>>s;
	    if (s.length()==n[i])
        {
	    for(int j=0;j<s.length();j++)
        {
            int l=s[j];
            if (l>64 && l<91)
            {
                upc+=1;
            }
            else if (l>96 && l<123)
            {
                lowc+=1;
            }
        }
        if(k[i]>=lowc)
        {
            flag+=1;
        }
        if(k[i]>=upc)
        {
            flag+=2;
        }
        /*
        if (flag==0)
        {
            cout<<"none";
        }
        else if (flag==3)
        {
            cout<<"both";
        }
        else if (flag==1)
        {
            cout<<"brother";
        }

        else if (flag==2)
        {
            cout<<"chef";
        }
        */

        if (flag==0)
        {
            m[i]="none";
        }
        else if (flag==3)
        {
            m[i]="both";
        }
        else if (flag==1)
        {
            m[i]="brother";
        }

        else if (flag==2)
        {
            m[i]="chef";
        }
        }
	}
    for(int i=0;i<t;i++)
	{
        cout<<m[i]<<endl;
	}


    return 0;
}
