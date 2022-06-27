#include<bits/stdc++.h>
using namespace std;

typedef long long lint;
typedef pair<lint, lint> pll;
#define INF 0x3f3f3f3f3f3f3f3f

lint n, m;
vector<pll> node[200000];

void Dijjkstra(){
    bool visit[n + 4];
    lint stp[n + 4];
    for (int i = 0; i < n + 4;i++){
        visit[i] = false;
        stp[i] = INF;
    }
    priority_queue<pll, vector<pll>, greater<pll>> PQ;
    PQ.push({ 0, 1 });
    stp[1] = 0;
    lint choose_node, now_shortest;
    while(!PQ.empty()){
        choose_node = PQ.top().second;
        now_shortest = PQ.top().first;
        PQ.pop();
        if(visit[choose_node]==true)
            continue;
        visit[choose_node] = true;
        lint connectN, connectW;
        for(auto connect_node:node[choose_node]){
            connectN = connect_node.first;
            connectW = connect_node.second;
            if(visit[connectN]==true)
                continue;
            if(stp[connectN]>stp[choose_node]+connectW){
                stp[connectN] = stp[choose_node] + connectW;
                PQ.push({ stp[connectN], connectN });
            }
        }
    }
    for (int i = 1; i <= n;i++){
        cout << stp[i]<<" ";
    }
}

int main(){
    cin >> n >> m;
    lint a, b, c;
    for (int i = 0; i < m;i++){
        cin >> a >> b >> c;
        node[a].push_back({b, c});
    }
    Dijjkstra();

        return 0;
}