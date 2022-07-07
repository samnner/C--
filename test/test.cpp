#include <iostream>
#include <regex>
using namespace std;

int main(){

  regex reg("(son)([[:alpha:]]*)");

  string input;
  getline(cin, input);

  smatch sm;
  int count = 0;
  while( regex_search(input, sm, reg) ){
    ++count;
    cout << "Match " << count << ":\n";
    cout << "The matches are:\n";
    for( int i = 0 ; i < sm.size() ; ++i ){
      cout << i << ": [" << sm[i] << ']' << endl;
    }
    cout << endl;
    input = sm.suffix().str();
  }

  return 0;
}