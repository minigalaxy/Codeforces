#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int t;

vector<int> c[3];

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t;

        c[t - 1].push_back(i + 1);
    }

    cout << min({ c[0].size(), c[1].size(), c[2].size() }) << '\n';

    for(int i = 0; i < min({ c[0].size(), c[1].size(), c[2].size() }); i++){
        cout << c[0][i] << ' ' << c[1][i] << ' ' << c[2][i] << '\n';
    }

    return 0;
}