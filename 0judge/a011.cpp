#include<iostream>
#include<string>
#include<regex>
using namespace std;

int main(){
    regex reg("[[:alpha:]]+");// '+'至少要搜到一遍
    string str;
    smatch sm;
    while(getline(cin,str)){
        int cnt = 0;
        //bool word = false;
        while (regex_search(str, sm, reg)){
            /*
            cout << sm.size() << endl;  //為什麼sm 無法cout sm[i]就可??? sm 到底是甚麼??
            for( int i = 0 ; i < sm.size() ; ++i ){
                cout << i << ": [" << sm[i] << ']' << endl;
            }
            */
            //if(!isalpha(str[0]))
            ++cnt;
            str = sm.suffix().str(); //這??
            //cout << str << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}