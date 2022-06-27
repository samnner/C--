#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//void swap(int *a, int *b){
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
long long sum_squ(int c,int d,int e,int f){
    return (c-d)*(c-d)+(e-f)*(e-f);
}
int main(){
    int n;
    int xy[1005][6];
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> xy[i][0]>>xy[i][1];
        if(i>0){
            for (int j = i-1; j >=0;j--){
                a.push_back(sum_squ(xy[i][0], xy[j][0], xy[i][1], xy[j][1]));
            }
        }
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size();i++){
        cout << a[i] << endl;
    }

        return 0;
}