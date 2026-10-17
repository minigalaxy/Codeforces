#include <iostream>
#include <algorithm>

using namespace std;

int t;

string grid[8];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 8; j++) cin >> grid[j];

        for(int j = 0; j < 8; j++){
            if(grid[j] != "........") cout << *max_element(grid[j].begin(), grid[j].end());
        }

        cout << '\n';
    }

    return 0;
}