#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--){
	 vector<string> vect;
	 string str1,str,str2="bob";
	 cin>>str>>str1;


	 	vect.push_back("bob");

	 	vect.push_back("obb");
	 	vect.push_back("bbo");


	 int te=0;
     for(int i=0;i<3;i++)
     {
     int te1=0;
	  for(int j=0;j<3;j++)
	   {
	   if(str1[j]==vect[i][j]||str[j]==vect[i][j])
	   {
	   te1++;
	   }
	 }
	 if(te1==3){
	   cout<<"yes"<<endl;
	   break;
	   }
	   else
	   {
	   	te++;
	   }

	 }
	 if(te==vect.size())
	 	 cout<<"no"<<endl;
	 }
	 return 0;

}
