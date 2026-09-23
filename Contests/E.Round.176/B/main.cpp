#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int t;

int n, k;

int a[5000];

vector<pair<int, int>> A;

queue<int> visit;
bool visited[5000] = { false, };

long long res;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        res = 0;

        cin >> n >> k;

        for(int j = 0; j < n; j++){
            cin >> a[j];

            A.push_back(make_pair(a[j], j));
        }

        sort(A.begin(), A.end(), greater<>());

        for(int j = 0; j < k; j++){
            visit.push(A[j].second);
            visited[A[j].second] = true;
            res += A[j].first;
        }

        int m;

        while(!visit.empty()){
            m = 0;

            for(int j = visit.size(); j > 0; j--){
                int v = visit.front();
                visit.pop();

                cout << a[v] << '\n';

                m = max(m, a[v]);

                if(v - 1 > -1 && !visited[v - 1]){
                    visit.push(v - 1);
                    visited[v - 1] = true;
                }
                if(v + 1 < n && !visited[v + 1]){
                    visit.push(v + 1);
                    visited[v + 1] = true;
                }
            }
        }

        res += m;

        cout << res << '\n';
    }

    return 0;
}
