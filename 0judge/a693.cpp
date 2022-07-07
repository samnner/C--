#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    while(cin>>n>>m){
        int a[n+1],food;
        a[0] = 0;
        for (int i = 1; i < n+1;i++){
            cin >> food;
            a[i] = a[i-1] + food;
        }
        int l, r;
        for (int i = 0; i < m;i++){
            cin >> l >> r;
            cout<<a[r]-a[l-1]<<endl;
        }  
    }

    return 0;
}