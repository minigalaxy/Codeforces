#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string s;

vector<string> n;

int main(){
    cin >> s;

    for(int i = 0, j = 0; i < s.size(); i++){
        if(s[i] == '+'){
            n.push_back(s.substr(j, i - j));
            j = i + 1;
        }

        if(i == s.size() - 1) n.push_back(s.substr(j, i - j + 1));
    }

    sort(n.begin(), n.end());

    cout << n[0];

    for(int i = 1; i < n.size(); i++) cout << '+' << n[i];

    return 0;
}