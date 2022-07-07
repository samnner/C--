#include<iostream>
using namespace std;

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int n;
    while(cin>>n){
        int a[n][n], cnt = 0;
        for (int i = 0; i < n;i++){
            if(i%2){
                for (int j = n-1; j >=0;j--){
                    a[i][j] = ++cnt;
                }
            }
            else{
                for (int j = 0; j < n;j++){
                    a[i][j] = ++cnt;
                }
            }
            for (int j = 0; j < n;j++){
                cout << a[i][j] <<" ";
            }
            cout <<"\n";
        }
        cout << endl;
    }
    return 0;
}//question: 這題超鬼,前兩行都在就不能都用"\n",阿但如果輸入(例如4)再輸一個不是int的就能輸出