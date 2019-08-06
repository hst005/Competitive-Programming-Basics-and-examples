#include <iostream>

using namespace std;

int maxdiv(int a,int b){
while(a%b==0)
    a=a/b;
return a;
}

int uglycheck(int n){

    n=maxdiv(n,2);
    n=maxdiv(n,3);
    n=maxdiv(n,5);

if(n==1){
    return 1;
}
else
    return 0;
}


int getnugly(int n)
{
  int i = 1;
  int count = 1;
  while (n > count)
  {
    i++;
    if (uglycheck(i))
      count++;
  }
  return i;
}

int main()
{
    int c=getnugly(10);
    cout << c << endl;
    return 0;
}
