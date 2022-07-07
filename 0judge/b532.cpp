#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        while(a--){
            string b;
            char c;
            int f=0, s=0;
            bool j=false;
            cin >> b;  //getline()重點!!str用之前要加"\n"!!!!!
            for (int i = 0; i < b.length();i++){
                //cout <<b[i]<<" "<< typeid(b[i]).name()<<endl;
                if(!j){
                    if(b[i]=='+'){
                        c = '+';
                        j=true;
                    }
                    else if(b[i]=='-'){
                        c = '-';
                        j=true;
                    }
                    else if(b[i]=='*'){
                        c = '*';
                        j=true;
                    }
                    else if(b[i]=='/'){
                        c = '/';
                        j=true;
                    }
                    else if(b[i]=='%'){
                        c = '%';
                        j=true;
                    }
                    else if(b[i]>=48 && b[i]<=57){ //b[i]+'0'>=48 && b[i]+'0'<=57 為什麼不行??? b[i]>='0' && b[i]<='9'也是
                        f += b[i]-48;
                        f *= 10;
                    }
                }
                else{
                    if(b[i]>=48 && b[i]<=57){
                        s += b[i]-48;
                        s *= 10;
                    }
                }
            }
            if(c=='+') cout<<(f/10)+(s/10)<<endl;
            else if(c=='-') cout<<(f/10)-(s/10)<<endl;
            else if(c=='*') cout<<(f/10)*(s/10)<<endl;
            else if(c=='/') cout<<(f/10)/(s/10)<<endl;
            else if(c=='%') cout<<(f/10)%(s/10)<<endl;
        }
    }
    return 0;
}