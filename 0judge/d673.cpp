#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s,a[12],cnt=0;
    while(cin>>s){
        if(s==-1)
            break;
        int q;
        for (int i = 0; i < 12;i++){
            cin >> a[i];
        }
        for (int i = 0; i < 12;i++){
            cin >> q;
            if(s-q>=0){
                s -= q;
                s += a[i];
                a[i] = 1;
            }
            else{
                s += a[i];
                a[i] = 0;
            }
        }
        cout << "Case " << ++cnt << ":" << endl;
        for (int i = 0; i < 12;i++){
            if(a[i] == 1)
                cout << "No problem! :D" << endl;
            else if(a[i] == 0)
                cout << "No problem. :(" << endl;
        }
    }

    return 0;
}