#include <iostream>
#include <set>

using namespace std;

int t;

int n;
int a[50], b[50];

set<int> c;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        c.clear();

        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> a[j];
        }

        for(int j = 0; j < n; j++){
            cin >> b[j];
        }

        for(int j = 0; j < n && c.size() < 3; j++){
            for(int k = 0; k < n && c.size() < 3; k++) c.insert(a[j] + b[k]);
        }

        if(c.size() >= 3) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}
