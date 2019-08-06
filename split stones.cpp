#include<iostream>
//#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007


using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,c,x,y;
		cin>>a>>b>>c>>x>>y;
		ll temp=x-a;
		ll temp2=c-temp;
		ll temp3=y-b;
		if(temp==temp3){

		cout<<"YES"<<endl;
		}
		else{
		cout<<"NO";
		}
	}

	return 0;
}

/*
#include<iostream>
//#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007


using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,c,x,y;
		cin>>a>>b>>c>>x>>y;
		ll temp=x-a;
		ll temp2=c-temp;
		ll temp3=y-b;
		if(temp2==temp3){

		cout<<"YES"<<endl;
		}
		else{
		cout<<"NO";
		}
	}

	return 0;
}
*/
