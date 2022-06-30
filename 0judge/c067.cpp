#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,cnt=1;
    while(cin>>n){
        if(n==0)
            break;
        int a[n],sum = 0;
        for (int i = 0; i < n;i++){
            cin >> a[i];
            sum += a[i];
        }
        int hi = sum / n,move=0;       
        for (int i = 0; i < n;i++){
            if(a[i]>hi)
                move += a[i] - hi;
        }
        cout << "Set #" << cnt << "\n" << "The minimum number of moves is " << move <<"."<< "\n" << endl;
        cnt++;
    }
    
    return 0;
}