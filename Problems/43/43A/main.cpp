#include <iostream>
#include <unordered_map>

using namespace std;

int n;

string s;

unordered_map<string, int> c;

string res;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(c[res] < ++c[s]) res = s;
    }

    cout << res;

    return 0;
}
