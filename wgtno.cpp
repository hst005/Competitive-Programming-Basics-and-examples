#include<bits/stdc++.h>
using namespace std;
/*long long int f(long long b, long long n,long long s)
{
    if(n==0)
       return 1;
    if(n==1)
    return b;
    long long half=f(b,n/2,s);
    if(n%2==0)
        return ( half * half ) % s;
    else
        return ( ( ( half * half ) % s ) * b ) % s;
}*/
long long fast_power(long long base, long long power,long long MOD) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	 long long int n,p=0;
	 long long int s=pow(10,9)+7;


	 int w;
	 cin>>n;
	 cin>>w;

	 if(w>8||w<-9)
	 {
	  cout<<0<<endl;

	 }
	 else
	 if(w>=0)
	 {int y=9-w;
	  p=fast_power(10,n-2,s);
	  p=(p*y)%s;
	  cout<<p<<endl;
	 }
	 else
	 {int y=(9+w)+1;
       p=fast_power(10,n-2,s);

       p=(p*y)%s;
       cout<<p<<endl;
	 }

	}
	return 0;
}
