#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct diff{
int pos,inv;
};

long long merge(int  *a,long long  start,long long  mid,long long  end){
long long  inv=0;
long long  i,j,k;
i=start;
j=mid+1;
k=0;
long long  temp[end-start+1];
while(i<=mid && j<=end){
    if (a[i]>a[j]){
        temp[k]=a[j];
        j++;
        inv+=mid-i+1;


    }
    else{
        temp[k]=a[i];
        i++;
    }
    k++;

}
while(i<=mid){
    temp[k]=a[i];
        i++;
        k++;
}

while(j<=end){
    temp[k]=a[j];
        j++;
        k++;
}

for(long long  i=0;i<=(end-start);i++){
    a[start+i]=temp[i];
}

return inv;
}


long long mergesort(int *ar,long long  start,long long  end){
long long inv=0;
if (start>=end){
    return 0;
}
long long  mid=start+(end-start)/2;
long long inv1=mergesort(ar,start,mid);
long long inv2=mergesort(ar,mid+1,end);
long long inv3=merge(ar,start,mid,end);

inv=inv1+inv2+inv3;

return inv;

}

long long solve(int A[], int n){
    long long temp=mergesort(A,0,n-1);
	// Write your code here.
	return temp;
}
bool cmp(diff a,diff b){
    if(a.inv==b.inv){
        return a.pos<b.pos;
    }
    return a.inv<b.inv;
}


int main()
{
    int p,s;
    cin>>p>>s;
   diff ans[p];

    for(int i=0;i<p;i++){
        int sc[s],ns[s];
        for(int j=0;j<s;j++){
            cin>>sc[j];
        }
        for(int j=0;j<s;j++){
            cin>>ns[j];
        }


        int inversions=solve(ns,s);

      cout<<inversions<<endl;
       ans[i].inv=inversions;
        ans[i].pos=i+1;


    }
   sort(ans,ans+p,cmp);

    for(int i=0;i<p;i++){
        cout<<ans[i].pos<<endl;
    }

    return 0;
}
