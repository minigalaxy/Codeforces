#include <iostream>
#include <unordered_map>

using namespace std;

string k[3] = { "qwertyuiop", "asdfghjkl;", "zxcvbnm,./" };

unordered_map<char, pair<int, int>> l;

char shft;

string seq;

int main(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            l[k[i][j]] = { i, j };
        }
    }

    cin >> shft;

    cin >> seq;

    for(char c: seq){
        pair<int, int> p = l[c];

        if(shft == 'R') cout << k[p.first][p.second - 1];
        else cout << k[p.first][p.second + 1];
    }

    return 0;
}