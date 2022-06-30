#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,n,m;
    cin >> t;
    while(t--){//數學圖形規律
        cin >> n >> m;
        int cnt = 1, r[n][n];
        for (int i = 0; i < (n+1)/2;i++){
            for (int j = 0; j < n - 2 * i - 1;j++)
                r[i][i + j] = cnt++;
            for (int j = 0; j < n - 2 * i - 1;j++)
                r[i + j][n-i-1] = cnt++;
            for (int j = 0; j < n - 2 * i - 1;j++)
                r[n-i-1][n-i-j-1] = cnt++;
            for (int j = 0; j < n - 2 * i - 1;j++)
                r[n-i-j-1][i] = cnt++;
        }
        if(n%2)
            r[n/2][n/2] = cnt;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                if(m==1)
                    cout << setw(5) << r[i][j];
                else if(m==2)
                    cout << setw(5) << r[j][i];
            }
            cout << endl;
        }
    }
    return 0;
}