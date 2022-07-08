#include<bits/stdc++.h>
using namespace std;
int main (){
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> node_edge[n + 1];
    int u, v;
    int p;
    for (int i = 0; i < m;i++){
        cin >> u >> v;
        node_edge[u].push_back(v);
    }
    for (int i = 0; i < q;i++){
        cin >> p;
        sort(node_edge[p].begin(), node_edge[p].end());
        if(node_edge[p].empty())
            cout << "-1" << endl;
        else{
            vector<int> x;
            for (auto a:node_edge[p]){
                if(!x.empty()){
                    if(a==x[x.size()-1]){
                        continue;
                    }
                }
                x.push_back(a);
                cout << a<<" ";
            }
            cout <<"\n";
        }   
    }
        return 0;
}