#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

int a[100'000];

vector<int> e[100'000];

queue<pair<int, int>> v;

bool visited[100'000] = { false, };

int res = 0;

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;

        e[x - 1].push_back(y - 1);
        e[y - 1].push_back(x - 1);
    }

    v.push({ 0, a[0] });
    visited[0] = true;

    while(!v.empty()){
        pair<int, int> p = v.front();
        v.pop();

        if(p.second > m) continue;

        bool l = true;

        for(int nv: e[p.first]){
            if(!visited[nv]){
                v.push({ nv, (p.second + a[nv]) * a[nv] });
                visited[nv] = true;
                l = false;
            }
        }

        if(l) res++;
    }

    cout << res;

    return 0;
}