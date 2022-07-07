#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, n;
    while(cin >> a >> b >> n){
        cout << a / b << "." ;
        while(n--){
            a = (a % b) * 10 ;
            cout << a / b;
        }
        cout << endl; // question:為何沒有這行印不出來
    }
    return 0;
}