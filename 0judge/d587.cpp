#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < sizeof(a)/4;i++){
        cin >> a[i];
    }
    sort(a, a+n);
    //sort(begin(a), end(a));
    for (int i = 0; i < sizeof(a)/4;i++){
        cout << a[i]<<" ";
    }
    return 0;
}