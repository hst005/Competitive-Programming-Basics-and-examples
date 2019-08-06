#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    //long int n[t];
    for(long int i=0;i<t;i++){
        long int m;
        cin>>m;
        long int a[m];
        for(long int j=0;j<m;j++){
            cin>>a[j];
            //b[i]=a[i];
        }
        //vector <int> t;
    /*for(int j=0;j<m;j++){
            for(int k=j+1;k<m;k++){
                //t.push_back(a[j]+a[k]);
                cout<<a[j]+a[k];
            }
    }
    for(int j=0;j<t.size();j++){
        cout<<t[j]<<"  ";
    }*/

        //sort(a,a+m);
        //vector <int> temp;
        long long int temp2=m*(m-1)/2;
        long int temp[temp2];
        long int c=0;
        for(int k=0;k<m;k++){
            for(int l=k+1;l<m;l++){
                temp[c]=(a[k]+a[l]);
                if(c<temp2)
                c++;
            }
            a[k]=2*a[k];
        }/*
       for(int k=0;k<temp2;k++){
            cout<<temp[k]<<"  ";
        }*/
//sort(temp,temp+temp2);
long int count=0;
/*
for(l=0;l<temp2;++l){
        for(j=l+1;j<temp2;)
        {
            if(a[l]==a[j])
            {
                for(k=j;k<temp2-1;++k)
                    a[k]=a[k+1];
                --temp2;
            }
            else
                ++j;
        }
}*/
sort(a,a+m);

        /*for(int j=0;j<m;j++){
            a[j]=2*a[j];
            //b[i]=a[i];
        }*/
    for(long int l=0;l<temp2;++l){
         if (binary_search(a, a + m,temp[l]))
            count++;

        }
        cout<<count;
    }
    return 0;
}
