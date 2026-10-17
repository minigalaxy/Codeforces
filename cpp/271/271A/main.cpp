#include <iostream>
#include <algorithm>

using namespace std;

int y;

string t;

bool f = true;

int main(){
    cin >> y;

    while(f){
        y++;
        f = false;

        t = to_string(y);

        sort(t.begin(), t.end());

        for(int i = 1; i < 4; i++){
            if(t[i - 1] == t[i]) f = true;
        }
    }

    cout << y;

    return 0;
}