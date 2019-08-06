#include <iostream>

using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    /*int start=1,last=n;
    int flag=0;
    while(start<=last){

        }
        else if(flag==1){
                cout<<2<<endl<<"1 "<<mid<<endl;
                last=mid-1;
                int inp;
                cin>>inp;
                flag=inp;
        }
    }
    cout<<"3 "<<start<<endl;
    */
    int l = 1, r = n;
    int prev=-1,prevmid=-1;
    while (l != r) {
        int mid = (l + r) / 2;
        cout<<"1 "<<mid<<endl;
       // fflush(stdout);

        int res;
        cin>>res;
        /*if (res==1){
            if(prev=0 && ((abs(prevmid-mid)==0) || abs(prevmid-mid)==1)){

            }
            r = mid - 1;
            cout<<"2"<<endl;
            prev=1;
            prevmid=mid;
        }
        else if(res==0){
            l = mid+1;
            prev=0;

            prevmid=mid;
        }*/
        if (res==1){
               // if(mid==prevmid &&)
            r = mid - 1;
            prevmid=mid;
            prev=res;
            cout<<"2"<<endl;
        }
        else if(res==0){

            l = mid+1;
        prevmid=mid;
            prev=res;
        }
    }
    if(l==prevmid){
    if(prev==1){
        cout<<"3 "<<l+1<<endl;

    }
    else{
        cout<<"3 "<<l-1<<endl;

    }
    }
    else{
        cout<<"3 "<<l<<endl;

    }
    //fflush(stdout);
    return 0;
}


/*int main()
{
    int n,c;
    cin>>n>>c;
    int y;
    y=n/2;
    int coins=1000;
    cout<<1<<" "<<y<<endl;
    int start=1;
    int last=n;
    int in;
    cin>>in;
    int m=start+(last-start)/2;

    if(in==1){
        last=m-1;
    cout<<"2"<<endl;
    cout<<1<<" "<<m<<endl;

    }
    else if(in==0){
        start=m+1;
        cout<<1<<" "<<m<<endl;
    }

    while(start<=last){
            int mid=start+(last-start)/2;
            int inp;
            cin>>inp;
            if(inp==1){
                    cout<<"2"<<endl;
                    cout<<1<<" "<<mid<<endl;
                coins=coins-c-1;
                last=mid-1;
            }
            else if(inp==0){
                    cout<<1<<" "<<mid<<endl;
                    start=mid+1;
                    coins--;
            }
    }
    cout<<"3 "<<start<<endl;


    return 0;
}
*/
