#include <iostream>
#include <algorithm>

using namespace std;

int t;

string n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cout << n.size() - count(n.begin(), n.end(), '0') << '\n';

        for(int j = n.size() - 1, k = 1; j >= 0; j--, k *= 10){
            if(n[j] != '0') cout << ((n[j] - '0') * k) << ' ';
        }

        cout << '\n';
    }

    return 0;
}