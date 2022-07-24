#include<iostream>
#include<vector>
#include<string>
#include<queue>

typedef std::pair<int, int> pii;

class rect{
private:
    std::vector<std::string> dimension;
    int length;
    int width;

public:
    rect(int l, int w) : length(l), width(w){
        dimension.resize(length);
        /*
        for (int i = 0; i < dimension.size();i++){
            dimension[i].resize(width);
        }
        */   
    };
    void Addstr();
    void BFS();
};

void rect::Addstr(){
    for (int i = 0; i < dimension.size();i++){
        std::cin>>dimension[i];
    }
}

void rect::BFS(){
    int color[length][width];
    std::queue<pii> q;
    int cnt = 0, maxarea = 0;

    for (int i = 0; i < length;i++){
        for (int j = 0; j < width;j++){
            color[i][j] = 0;
        }
    }

    for (int i = 0; i < length;i++){
        for (int j = 0; j < width;j++){
            if(dimension[i][j]=='J' && color[i][j]==0){
                cnt++;
                int area = 1;
                color[i][j] = 1;
                q.push(pii{i,j});
                while (!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    if(x-1>=0 && dimension[x-1][y]=='J' && color[x-1][y]==0){
                        area++;
                        color[x - 1][y] = 1;
                        q.push(pii{x - 1,y});
                    }
                    if(x+1<length && dimension[x+1][y]=='J' && color[x+1][y]==0){
                        area++;
                        color[x + 1][y] = 1;
                        q.push(pii{x + 1,y});
                    }
                    if(y-1>=0 && dimension[x][y-1]=='J' && color[x][y-1]==0){
                        area++;
                        color[x][y - 1] = 1;
                        q.push(pii{x,y - 1});
                    }
                    if(y+1<width && dimension[x][y+1]=='J' && color[x][y+1]==0){
                        area++;
                        color[x][y + 1] = 1;
                        q.push(pii{x,y + 1});
                    }
                    q.pop();
                }
                if(area>maxarea) maxarea=area;
            } 
        }
    }
    std::cout << cnt << " " << maxarea << std::endl;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int m, n;
    while(std::cin >> m >> n){
        rect T(m, n);
        T.Addstr();
        T.BFS();
    }
    return 0;
}