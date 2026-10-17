#include <iostream>
#include <queue>

using namespace std;

int n, m;

queue<int> visit;

bool visited[10'001] = { false, };

int res = 0;

int main(){
    cin >> n >> m;

    visit.push(n);
    visited[n] = true;

    while(true){
        for(int i = visit.size(); i > 0; i--){
            int v = visit.front();
            visit.pop();

            if(v == m){
                cout << res;

                return 0;
            }

            if(v * 2 <= 10'000 && !visited[v * 2]){
                visit.push(v * 2);
                visited[v * 2] = true;
            }
            if(v - 1 > 0 && !visited[v - 1]){
                visit.push(v - 1);
                visited[v - 1] = true;
            }
        }

        res++;
    }

    return 0;
}