#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,x,y;
    cin >> m >> x >> y;
    bitset<16> bits(m);
    cout<<typeid(bits).name();
    string bin(bits);
    int dec = stoi(bin);
    cout << dec;
    //cout << m;
    return 0;
}