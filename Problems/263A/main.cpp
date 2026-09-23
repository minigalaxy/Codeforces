#include <iostream>

using namespace std;

bool t;

int x, y;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> t;

            if(t) x = i, y = j;
        }
    }

    cout << abs(2 - x) + abs(2 - y);

    return 0;
}