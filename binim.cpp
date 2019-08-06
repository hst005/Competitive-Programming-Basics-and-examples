#include <iostream>
#include <stack>
using namespace std;
//incomplete
/*
int main()
{

    int t;
    cin>>t;
    while(t--){

        int n;
        string s;
        cin>>n>>s;
        string numb[n];
        for(int i=0;i<n;n++){
                cin>>numb[i];

                //for(j=0;j<no[i].length();j++){


                //}

        }
         for(int i=0;i<n;n++){
                cout<<numb[i];


        }
        //stack
    }
    return 0;
}
*/

void changetemp(int temp){
    if(temp==0)
        temp=1;
    else
        temp=0;
}
int main()
{

    int t;
    cin>>t;
    while(t--){

        int n;
        string s;
        cin>>n>>s;
        string num[n];
        for(int i=0;i<n;i++){
            cin>>num[i];
        }

        int start;
        if(s=='Dee'){
            start=0;
        }
        else if(s=='Dum'){
            start=1;
        }
        int k=n;
        int i=0;int j;
        int temp=start;
        while(k--){
                j=0;

                //j=no[i].length();
        while(j<no[i].length()){
            if(no[i][j]==temp){
                no[i].erase(j);
                changetemp(temp);
            }
            j++;
        }
        i++;
        }
    }
    return 0;
}
