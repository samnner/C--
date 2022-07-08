#include<iostream>
#include<string>
#include<vector>
#include<math.h>//沒有math.h??
using namespace std;

long long isPrime(long long num){
    if(num==0 || num==1) return false;
    for (int i = 2; i <= sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}

int main(){
    string str;
    while(cin>>str){
        long long num=0;
        vector<long long> total;
        for (int i = 0; i < str.length();i++){
            num += str[i]-'0';
            if(isPrime(num)){
                total.push_back(num);
                num = 0;
            }
            num *= 10;
        }
        cout << total.size() << endl;
        for (int i = 0; i < total.size();i++){
            cout << total[i] << endl;
        }
        cout << endl;
    }

    return 0;
}