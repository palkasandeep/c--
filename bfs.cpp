#include<bits/stdc++.h>
using namespace std;
const int N=10;
vector<int>source[N];
int vist[N];
void bfs(int start);
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        source[x].push_back(y);
        source[y].push_back(x);
    }
    bfs(1);
}
void bfs(int start){
    queue<int>q;
    q.push(start);
    vist[start]=1;
    while(!q.empty()){
        int curv=q.front();
        q.pop();
        cout<<curv;
        for(int child:source[curv]){
            if(!vist[child]){
                q.push(child);
                vist[child]=1;
            }
        }
    }

}

