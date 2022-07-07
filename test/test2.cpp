#include<iostream>
#include<string>
#include<regex>
using namespace std;

int main(){
    regex reg("[[:alpha:]]+");
    string str;
    smatch sm;
    while(getline(cin,str)){
        int cnt = 0;
        while (regex_search(str, sm, reg)){
            ++cnt;
            str = sm.suffix().str();
        }
        cout << cnt << endl;
    }
    return 0;
}