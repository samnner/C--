#include<bits/stdc++.h>
using namespaces std;

int main(){
    int a, b, n;
    while(1){
        cin >> a >> b >> n;
        cout << setfill('0') << setw(n) << a / b;
    }
    return 0;
}