#include <iostream>

using namespace std;

int main()
{
    int t;
    while(t--){
            int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        int r;
        r=a+b+c+d+e;
        if(r==0){
            cout<<"Beginner"<<endl;
        }
        else if(r==1){
            cout<<"Junior Developer"<<endl;
        }
        else if(r==2){
            cout<<"Middle Developer"<<endl;
        }
        else if(r==3){
            cout<<"Senior Developer"<<endl;
        }
        else if(r==4){
            cout<<"Hacker"<<endl;
        }
    else if(r==5){
            cout<<"Jeff Dean"<<endl;
        }
    }
    return 0;
}
