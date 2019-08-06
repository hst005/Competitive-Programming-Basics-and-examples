#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long int k,index=0;
        int mo;
        cin>>k;
        int d[k];
        cin>>d[0]>>d[1];
        //if (d[0]<=9 && d[0]>=1 && d[1]<=9 && d[1]>=0 )
        {
        for(unsigned long long int i=2;i<k;i++)
        {
            int sum=0;
            for (unsigned long long int j=0;j<i;j++)
            {
                sum=sum+d[j];
                sum=sum%10;
            }
            d[i]=sum;
            if (d[i]==6 && d[i-1]==8 && d[i-2]==4 && d[i-3]==2){
                index=i;
                mo=index%4;
                break;
                }
        }
        int a=0;
        for(unsigned long long int i=index+1;i<k;i++)
        {
            if(a%4==0){
            d[i]=2;}
            else if(a%4==1){
            d[i]=4;}
            else if(a%4==2){
            d[i]=8;}
            else if(a%4==3){
            d[i]=6;}
            a+=1;
        }
        unsigned long long int fsum=0;
        for(unsigned long long int i=0;i<k;i++)
        {
            fsum+=d[i];
        }
        if (fsum%3==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
    return 0;
}
