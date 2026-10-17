#include <iostream>

using namespace std;

int n, m;

char c;

bool res = true;

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c;

            if(c != 'W' && c != 'G' && c != 'B') res = false;
        }
    }

    cout << ((res) ? "#Black&White" : "#Color");

    return 0;
}