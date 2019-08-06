#include <iostream>

#include<string>
using namespace std;

int main()
{
    long int t;
    cin>>t;

    long long int coun;
    for(long int j=0;j<t;j++){
        string s;
        cin>>s;
        coun=0;
         for(long long int i=0;i<s.length()-3;i++)
         {
             string m;
             m=s.substr(i,4);
             //if (s[i]=='c' || s[i]=='h' || s[i]=='e' || s[i]=='f'){
             if (s[i]=='c'){
             if(m=="chef"){
                coun++;
             }
             else if(m=="cefh"){
                coun++;
             }
             else if(m=="cehf"){
                coun++;
             }
             else if(m=="cfeh"){
                coun++;
             }
             else if(m=="cfhe"){
                coun++;
             }
             else if(m=="chfe"){
                coun++;
             }
             }
             else if (s[i]=='e'){
             if(m=="ecfh"){
                coun++;
             }
             else if(m=="echf"){
                coun++;
             }
             else if(m=="efch"){
                coun++;
             }
             else if(m=="efhc"){
                coun++;
             }
             else if(m=="ehcf"){
                coun++;
             }
             else if(m=="ehfc"){
                coun++;
             }
             }
             else if (s[i]=='h'){
             if(m=="hcef"){
                coun++;
             }
             else if(m=="hcfe"){
                coun++;
             }
             else if(m=="hecf"){
                coun++;
             }
             else if(m=="hefc"){
                coun++;
             }
             else if(m=="hfce"){
                coun++;
             }
             else if(m=="hfec"){
                coun++;
             }
             }
             else if (s[i]=='f'){
             if(m=="fceh"){
                coun++;
             }
             else if(m=="fche"){
                coun++;
             }
             else if(m=="fech"){
                coun++;
             }
             else if(m=="fehc"){
                coun++;
             }
             else if(m=="fhce"){
                coun++;
             }
             else if(m=="fhec"){
                coun++;
             }
             }
            // }
         }
         if(coun==0){
                cout<<"normal"<<endl;
            }
            else{
                cout<<"lovely "<<coun<<endl;
            }
    }
    /*
     for(long int i=0;i<t;i++){
            if(fin[i]==0){
                cout<<"normal"<<endl;
            }
            else{
                cout<<"lovely "<<fin[i]<<endl;
            }
        }
    */
    return 0;
}
