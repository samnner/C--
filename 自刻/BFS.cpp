#include<iostream>
#include<vector>
#include<list>
#include<queue>
//using namespace std;// 試著不使用
class Graph{
private:
    int num_vertex;
    std::vector<std::list<int>> Adjlist;
    int *color;
    int *distance;
    int *predecessor;

public:
    Graph() : num_vertex(0){};
    Graph(int n):num_vertex(n){
        Adjlist.resize(num_vertex);
    };//constructor
    void AddAdjlist(int from, int to);
    void BFS(int start);
};

void Graph::AddAdjlist(int from,int to){
    Adjlist[from].push_back(to);
}

void Graph::BFS(int start){
    color = new int[num_vertex];
    distance = new int[num_vertex];
    predecessor = new int[num_vertex];
    std::queue<int> q;

    for (int i = 0; i < num_vertex;i++){
        color[i] = 0;
        distance[i] = num_vertex;
        predecessor[i] = -1;
    }

    for (int i = 0; i < num_vertex + 1;i++){
        if(color[start]==0){
            color[start] = 1;
            distance[start] = 0;
            q.push(start);
            while(!q.empty()){
                int f = q.front();
                for (std::list<int>::iterator iter = Adjlist[f].begin(); iter!=Adjlist[f].end();iter++){
                    if(color[*iter]==0){
                        color[*iter] = 1;
                        distance[*iter] = distance[f] + 1;
                        predecessor[*iter] = f;
                        q.push(*iter);
                    }
                }
                color[f] = 2;
                q.pop();
            }
        }
        start = i;
    }
}
/*
int main(){
    Graph g1(9);
    return 0;
}
*/