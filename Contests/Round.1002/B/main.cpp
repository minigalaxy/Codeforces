#include <iostream>
#include <queue>

using namespace std;

int t;

int n, k;

int a[200001];

int bfs(){
    queue<pair<int, int>> visit;

    for(int i = 0; i <= n - k; i++) visit.push(make_pair(i + 1, n - k - i));

    int cost = 1;

    while(!visit.empty()){
        for(int i = 0; i < visit.size(); i++){
            pair<int, int> v = visit.front();
            visit.pop();

            if(v.first != cost) return cost;

            for(int j = 1; j <= v.second; j++){
                if() return
            }
        }

        cost++;
    }
}

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        for(int j = 0; j < n; j++) cin >> a[j];
        a[n] = 0;

        cout << bfs();
    }

    return 0;
}
