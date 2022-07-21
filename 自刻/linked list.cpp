#include<iostream>
using namespace std;

struct listnode{
    int value;
    listnode *next;
    listnode(int x) : value(x), next(NULL) {} //為甚麼要加;在最後//這行不是很懂//初始化initializer
};

class linkedlist{
private:
    listnode *head;//=new listnode() 不用嗎
public:
    linkedlist():head(NULL){}
    listnode *first;
    void display(){
        if(head==NULL)
            cout << "list is empty." << endl;
        else{
            listnode *current = first;
            while(current!=NULL){
                cout << current->value<<" ";
                current = current->next;
            }
        }
    }
    void push_back(){
        int num;
        cin >> num;
        listnode *newnode = new listnode(num);
        if(head==NULL){
            head = newnode;
            first = newnode;
        }
        else{
            head->next = newnode;
            head = head->next;
        }
        head->next = NULL;
    }
};

int main(){
    linkedlist list;
    //list.push_back();
    //list.push_back();
    list.display();
    return 0;
}