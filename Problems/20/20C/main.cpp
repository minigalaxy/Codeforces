#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

vector<pair<int, int>> edge[100'001];

priority_queue<pair<long long, int>> Q;

long long dist[100'001];

const long long MAX = 100'000'000'000LL;

void back_track(int cur){
    if(cur == 1){
        cout << 1 << ' ';

        return;
    }

    for(pair<int, int> next: edge[cur]){
        if(dist[cur] == dist[next.first] + next.second){
            back_track(next.first);

            cout << cur << ' ';
            
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b, w;
        cin >> a >> b >> w;

        edge[a].push_back({ b, w });
        edge[b].push_back({ a, w });
    }

    fill(dist + 1, dist + n + 1, MAX);

    Q.push({ 0LL, 1 });
    dist[1] = 0;

    while(!Q.empty()){
        pair<long long, int> cur = Q.top();
        Q.pop();

        for(pair<int, int> next: edge[cur.second]){
            long long next_dist = cur.first + next.second;

            if(next_dist < dist[next.first]){
                Q.push({ next_dist, next.first });
                dist[next.first] = next_dist;
            }
        }
    }

    if(dist[n] < MAX) back_track(n);
    else cout << -1;

    return 0;
}