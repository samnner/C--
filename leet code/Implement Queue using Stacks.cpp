#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
private:
    stack<int> s;

public:
    MyQueue() {}
    
    void push(int x) {
        if(s.empty()){
            s.push(x);
            return;
        }
        int temp=s.top();
        s.pop();
        push(x);
        s.push(temp);
        return;
    }
    
    int pop() {
        int top=s.top();
        s.pop();
        return top;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
/*
    void display(){
        cout << s.top()<<endl;
    }
*/
};
/*
int main(){
    MyQueue queue;
    int choice,num;
    while(cin>>choice){
        if(choice==1){
            cin >> num;
            queue.push(num);
        }
        else if(choice==2)
            cout << queue.pop() << endl;
        else if(choice==3)
            cout << queue.peek() << endl;
        else if(choice==4)
            cout << queue.empty() << endl;
        else if(choice==5)
            queue.display();
        else
            continue;
    }
    return 0;
}
*/