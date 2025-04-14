#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int t;

int n;

int G[801][801];

bool visited[1601];

deque<int> res;

bool dfs(int i){
    if(i > n * 2){
        for(int j = 1; j <= n * 2; j++){
            if(!visited[j]){
                res.push_front(j);
                break;
            }
        }
            
        while(!res.empty()){
            cout << res.front() << ' ';
            res.pop_front();
        }
        
        cout << '\n';
        
        return false;
    }
    
    for(int j = max(i - n, 1); j < min(i, n + 1); j++){
        if(!visited[G[j][i - j]]){
            visited[G[j][i - j]] = true;
            res.push_back(G[j][i - j]);
        
            if(!dfs(i + 1)) return false;
            
            visited[G[j][i - j]] = false;
            res.pop_back();
        }
    }
    
    return true;
}

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++) cin >> G[j][k];
        }
        
        fill(visited + 1, visited + n * 2 + 1, false);
        
        dfs(2);
    }
    
    return 0;
}
