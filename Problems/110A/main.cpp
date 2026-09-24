#include <iostream>

using namespace std;

string n;

int cnt = 0;

bool res = true;

int main(){
    cin >> n;

    for(char c: n){
        if(c == '4' || c == '7') cnt++;
    }

    for(char c: to_string(cnt)){
        if(c != '4' && c != '7') res = false;
    }

    cout << (res ? "YES" : "NO");

    return 0;
}