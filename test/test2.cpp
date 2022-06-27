#include <iostream>
#include<cmath>
using namespace std; 
  int main() {
    int a[5],x,y,sum;
    a[1]=2300,a[2]=800,a[3]=500,a[4]=1500;
    for(int i=0;i<2;i++){
        cin>>x>>y;
        sum=a[x]+a[y];
        if(sum>3000)
            cout<<"超出預算";
        else
            cout<<"符合預算";
    }
    return 0;
  }