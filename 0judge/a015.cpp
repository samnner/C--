#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    while(cin >> row >> col){
        int A[row][col];

        for(auto &r:A){
            for(auto &rc:r){
                cin >> rc;
            }
        }

        for (int i = 0; i < col;i++){
            for (int j = 0; j < row;j++){
                cout<< A[j][i]<<" ";
            }
            cout << endl;
        }

    }
    return 0;
}

//question:auto為何一定要加&