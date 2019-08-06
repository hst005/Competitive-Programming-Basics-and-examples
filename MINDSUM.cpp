#include <iostream>
#define ll long long
#define lmax LONG_MAX
#define lmin LONG_MIN
#include<bits/stdc++.h>
//done
using namespace std;

struct node{
    ll val;
    node *sum;
    node *inc;
    ll level;
};

struct ans{
    ll mi;
    ll steps;
};
ll sumDigits(ll no)
{
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
}


node *create(ll value){
    node *t=new node;
    t->val=value;
    t->sum=NULL;
    t->inc=NULL;
    t->level=0;
    return t;
}


ans update(queue <node *> temp,ll m,ans mini){
     while(!temp.empty() && temp.front()->level<17){

     node *curr=temp.front();
     temp.pop();
     curr->sum=create(sumDigits(curr->val));
     curr->inc=create(curr->val+m);
    if(curr->sum->val==1 || curr->inc->val==1){
        mini.mi=1;
        mini.steps=curr->level+1;
        return mini;
    }

     curr->sum->level=curr->level+1;
     curr->inc->level=curr->level+1;

     temp.push(curr->sum);
     temp.push(curr->inc);

     if(curr->sum->val<mini.mi){
            mini.mi=curr->sum->val;
            mini.steps=curr->sum->level;
     }
     if(curr->inc->val<mini.mi){
            mini.mi=curr->inc->val;
            mini.steps=curr->inc->level;
     }
     }
     return mini;
}
int main()
{
   ll t;
    cin>>t;
    while(t--){
        ll n1,d;
        cin>>n1>>d;
        node *n=new node;
        n=create(n1);
        ans mini;
        mini.mi=n1;
        mini.steps=0;
        queue <node *> temp;
        temp.push(n);
        ans get=update(temp,d,mini);
        cout<<get.mi<<" "<<get.steps<<endl;
    }
    return 0;
}
