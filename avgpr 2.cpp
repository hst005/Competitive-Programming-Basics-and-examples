#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	 long long int n,temp=0,temp1=0,temp2=0;
	 cin>>n;
	 set<long long int> s;
	 vector<long int> v,v1,v2,v3,v4,v5,v6,v7;
	 for(int j=0;j<n;j++)
	 {
	 int u;
	 cin>>u;
	 s.insert(u);
	 v1.push_back(2*u);
	 v3.push_back(u);
	 }

	 set<long long int>::iterator itr;
	 for(itr=s.begin();itr!=s.end();itr++)
	 {
	 	if(*itr%2==0)
	 v.push_back(*itr);
	else
		v2.push_back(*itr);
	 }
	 sort(v1.begin(),v1.end());
	 sort(v2.begin(),v2.end());
	 sort(v.begin(),v.end());
	 sort(v3.begin(),v3.end());
	 for(int j=0;j<=v3.size()-1;j++)
	 {
	 	if(v3[j]%2==0)
	 	{if(j<v3.size()-1){
	 		if(v3[j]==v3[j+1])
	 			temp2++;

	 	else
	 	{
	 		v6.push_back(temp2+1);
	 		temp2=0;
	 	}}
	 	else
	 	{
	 		v6.push_back(temp2+1);
	 		temp2=0;
	 	}
	 }else
	 if(v3[j]%2!=0)
	 {if(j<v3.size()-1){
	 	if(v3[j]==v3[j+1])
	 	{
	 		temp1++;
	 	}
	 	else
	 	{
	 		v5.push_back(temp1+1);
	 		temp1=0;
	 	}}else
	 	{
	 		v5.push_back(temp1+1);
	 		temp1=0;
	 	}
	 }}
	 if(v2.size()>0){
	for(int j=0;j<v2.size()-1;j++)
	{
		for(int k=j+1;k<v2.size();k++)
		{long long int y=v2[j]+v2[k];
			int x=binary_search(v1.begin(),v1.end(),y);
			if(x==1)
				temp=temp+(v5[j]*v5[k]);
		}
	}}
	if(v.size()>0){
	for(int j=0;j<v.size()-1;j++)
	{
		for(int k=j+1;k<v.size();k++)
		{long long int y=v[j]+v[k];
			int x=binary_search(v1.begin(),v1.end(),y);
			if(x==1)
				temp=temp+(v6[j]*v6[k]);
		}
	}}
	v7.reserve(v5.size()+v6.size());
	v7.insert(v7.end(),v5.begin(),v5.end());
	v7.insert(v7.end(),v6.begin(),v6.end());

	for(int j=0;j<v7.size();j++)
	{
		long long int r=v7[j]-1;
		long long int y=(r*(r+1))/2;
		temp=temp+y;
	}


	cout<<temp<<endl;
	}
	return 0;
}
