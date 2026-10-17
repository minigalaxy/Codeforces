#include <iostream>

using namespace std;

string p;

bool res = false;

int main(){
    cin >> p;

    for(char c: p){
        if(c == 'H' || c == 'Q' || c == '9') res = true;
    }

    cout << ((res) ? "YES" : "NO");

    return 0;
}