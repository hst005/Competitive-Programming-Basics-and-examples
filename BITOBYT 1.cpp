#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=1000;
	//cin>>t;

	for(int i=0;i<t;i++)
	{
	 long long int n,temp=1,temp1=0,temp2=0,temp3=0;
	 //cin>>n;
	 n=i;
	 while(1){
	  if(n<=2)
	  {
	   temp1++;
	  }else
	  if(n<=10)
	  {
	  temp2++;
	  }
	  else
	   if(n<=26)
	    temp3++;
	   else
	   {

	   long long int r=(n-1)/26;


	   	 n=((n-1)%26)+1;

	   temp=pow(2,r);
	   }
	   if(temp1>0||temp2>0||temp3>0)
	   {cout<<i<<" ";
	   cout<<temp*temp1<<" "<<temp*temp2<<" "<<temp*temp3<<endl;
	   break;

	   }

	}}
	return 0;
}
