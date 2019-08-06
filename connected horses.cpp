#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define mod  1000000007
//typedef long long ll;
using namespace std;

struct pos{
int x,y;

};
bool cmp(pos a,pos b){
if(a.x==b.x && a.y==b.y){
    return true;
}
return false;
}
ll fact(int n)
{
    if (n >= 0)
    {
        result[0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            result[i] = i * result[i - 1];
        }
        return result[n];
    }
}

//bool check()
ll photographs(int n,int m,long int q,pos *in){
        bool *was=new bool[q];
        vector <int> go[q];
        for(int i=1;i<q;i++){
            int r[]={1,1,-1,-1,2,2,-2,-2};
            int c[]={2,-2,2,-2,1,-1,1,-1};
            //int j=8;
            for(int j=0;j<8;j++){
                pos temp;
                temp.x=in[i].x+r[j];
                 temp.y=in[i].x+c[j];
                if(temp.x>=n || temp.y>=m || temp.x<0 || temp.y<0){
                    continue;
                }
                for(int k=0;k<=i-1;k++){
                    if(cmp(in[k],temp)){
                        go[k].push_back(i);
                        go[i].push_back(k);
                    }
                }
            }

        }

        for(int i=0;i<q;i++){
            was[q]=false;
        }
        int ans=1;
        for(int i=0;i<q;i++){
            if(was[i]==true){
                continue;
            }

            vector <int> q;
            int st=0;
            q.push_back(i);
            was[i]=true;
            while(st<q.size()){
                int x=q[st];st++;
            for (int j = 0; j < go[x].size(); j++) {
                int to = go[x][j];
                if (was[to] == false) {
                        was[to] = true;
                        q.push_back(to);
                        }
                }
            }
            int count=q.size();
            ans*=fact(count);

        }

return ans;


}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        long int q;
        cin>>n>>m>>q;
        pos in[q];
        for(int i=0;i<q;i++){
            cin>>in[i].x>>in[i].y;
        }
        cout<<photographs(n,m,q,in)<<endl;

    }
    return 0;
}
