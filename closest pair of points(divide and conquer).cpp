#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct point{
int x,y;
};

bool cmpx(point a,point b){
    return a.x<b.x;

}

bool cmpy(point a,point b){
    return a.y<b.y;

}


float min(float x,float y){
return (x<y)?x:y ;
}
float dist(point a,point b){
return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

float bruteforce(point a[],int n){
    float min=FLT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                float temp=dist(a[i],a[j]);
                if (temp<min){
                    min =temp;
                }

        }
    }
    return min;

}/*
float bruteforce(point P[], int n)
{
    float min = FLT_MAX;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            if (dist(P[i], P[j]) < min)
                min = dist(P[i], P[j]);
    return min;
}
*/
float stripclosest(point strip[],int n,float d){
float min=d;
sort(strip,strip+n,cmpy);
for(int i=0;i<n;i++){
    for(int j=i+1;j<n && (strip[j].y-strip[i].y)<min;j++){
        float temp=dist(strip[i],strip[j]);
                if (temp<min){
                    min =temp;
                }
    }
}
return min;
}
//*/
/*
float stripclosest(point strip[],int size,float d){
    float min = d;  // Initialize the minimum distance as d

    sort(strip,strip+size, cmpy);

    // Pick all points one by one and try the next points till the difference
    // between y coordinates is smaller than d.
    // This is a proven fact that this loop runs at most 6 times
    for (int i = 0; i < size; ++i)
        for (int j = i+1; j < size && (strip[j].y - strip[i].y) < min; ++j)
            if (dist(strip[i],strip[j]) < min)
                min = dist(strip[i], strip[j]);

    return min;
}
*/
float closeutil(point a[],int n){
if(n<=3)
    return bruteforce(a,n);
int mid=n/2;
point midpt=a[mid];
float dl=closeutil(a,mid);
float dr=closeutil(a+mid,n-mid);
float d=min(dl,dr);
point strip[n];
int j=0;
for(int i=0;i<n;i++){
    if(abs(a[i].x-midpt.x)<d){
        strip[j]=a[i];
        j++;
    }
}
float dfin=stripclosest(strip,j,d);
//return min(dfin,d);
return dfin;
}

float closest(point a[],int n){
    //int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n,cmpx);
    return closeutil(a,n);

}
/*
void try1(point *P,int n){
       sort(P,P+n,cmpx);
    for(int i=0;i<n;i++){
        cout<<P[i].x<<","<<P[i].y<<endl;
    }
}
*/

int main()
{
    //cout << "Hello world!" << endl;
    point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};

 int n=sizeof(P)/sizeof(P[0]);

    //try1(P,n);
    cout<<closest(P,n);
    //cout<<bruteforce(P,n);
    //cout<<dist(P[0],P[2]);
    //cout<<min(27.08,27.65);
    return 0;
}
