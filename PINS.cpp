#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*
string longDivision(string number,long long int divisor)
{
    // As result can be very large store it in string
    string ans;

    // Find prefix of number that is larger
    // than divisor.
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
       temp = temp * 10 + (number[++idx] - '0');

    // Repeatedly divide divisor with temp. After
    // every division, update temp to include one
    // more digit.
    while (number.size() > idx)
    {
        // Store result in answer i.e. temp / divisor
        ans += (temp / divisor) + '0';

        // Take next digit of number
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }

    // If divisor is greater than number
    if (ans.length() == 0)
        return "0";

    // else return ans
    return ans;
}

long long int gcd(long int a,long int b){
if(a<b){
    return gcd (b,a);
}
if(b==0){
    return a;
}
    return gcd(b,a%b);
}

long long int findgcd(long int a,string b){
//if (a==0){
  //return stoi(b);
//}
    long int c=0;
      int temp=0,temp2=0;
    char *t=new char[1];
    t[0]=b[0];
    temp=atoi(t);
    temp=temp%a;
    for(int i=1;i<b.length();i++){
            t[0]=b[i];
        temp=(temp*10+atoi(t))%a;
    }
    long long int ans=gcd(a,temp);

    return ans;
}


long int power(long int x,long int y)
{
    long int temp;
    if( y == 0)
       return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}

long long int invalidpin(long int n){
    if(n%2==0){
        return power(10,n/2);
    }
    else {
        return power(10,(n/2)+1);
    }
}
*/
int main()
{
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        /*long int invalid=invalidpin(n);
        if(n<=9){
        long long int temp=power(10,n);
        long long int gc=gcd(invalid,temp);
        cout<<(invalid/gc)<<" "<<(temp/gc)<<endl;
        }
        else {
            string temp="1";
            for(long int i=0;i<n;i++){
                temp+="0";
            }
        long long int gc=findgcd(invalid,temp);
        cout<<(invalid/gc)<<" "<<longDivision(temp,gc)<<endl;
        }

        */
        string temp="1";
            for(long int i=0;i<n/2;i++){
                temp+="0";
            }
        cout<<"1"<<" "<<temp<<endl;
    }
    return 0;
}
