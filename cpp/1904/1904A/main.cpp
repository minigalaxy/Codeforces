#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t;

int a, b;

int K[2], Q[2];

int dx[4] = { 1, 1, -1, -1 };
int dy[4] = { 1, -1, 1, -1 };

vector<pair<int, int>> pos;

int main(){
    cin >> t;

    while(t--){
        pos.clear();

        cin >> a >> b;

        cin >> K[0] >> K[1];

        cin >> Q[0] >> Q[1];

        int res = 0;

        for(int i = 0; i < 4; i++){
            pos.push_back({ K[0] + a * dx[i], K[1] + b * dy[i] });
            pos.push_back({ Q[0] + a * dx[i], Q[1] + b * dy[i] });
            if(a != b){
                pos.push_back({ K[0] + b * dx[i], K[1] + a * dy[i] });
                pos.push_back({ Q[0] + b * dx[i], Q[1] + a * dy[i] });
            }
        }

        sort(pos.begin(), pos.end());

        for(int i = 0; i < pos.size() - 1; i++){
            if(pos[i] == pos[i + 1]) res++;
        }

        cout << res << '\n';
    }

    return 0;
}