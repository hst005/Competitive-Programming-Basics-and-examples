#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){

		ll n,a,b;
		cin>>n>>a>>b;
		ll ar[n];
		vector <int> ab,a1,b1;
		ll couna=0,counb=0,counab=0;
		for(int i=0;i<n;i++){
			cin>>ar[i];
			if(ar[i]%a==0 && ar[i]%b==0){
				ab.push_back(i);
				counab++;
			}
			else{
				if(ar[i]%a==0){
					a1.push_back(i);couna++;
				}
				if(ar[i]%b==0){
					b1.push_back(i);counb++;
				}
			}
		}//hst
		if(a==b){
			cout<<"BOB"<<endl;
			continue;
		}/*
		else if(counab%2==0){
            if(couna==counb){
                cout<<"BOB"<<endl;
                continue;
            }
            else if(counb==0){
                cout<<"BOB"<<endl;
                continue;
            }
            else if(couna==0){
                cout<<"ALICE"<<endl;
                continue;
            }
            else if(couna>counb){
                cout<<"BOB"<<endl;
                continue;
            }
            else if(couna<counb){
                cout<<"ALICE"<<endl;
                continue;
            }

		}
		else if(counab%2==1){
            if(couna==counb){
                cout<<"ALICE"<<endl;
                continue;
            }
            else if(counb==0){
                cout<<"BOB"<<endl;
                continue;
            }
            else if(couna==0){
                cout<<"ALICE"<<endl;
                continue;
            }
            else if(couna<counb){
                cout<<"BOB"<<endl;
                continue;
            }
            else if(couna>counb){
                cout<<"ALICE"<<endl;
                continue;
            }

		}*/


	}

	return 0;
}
