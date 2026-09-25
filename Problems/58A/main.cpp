#include <iostream>

using namespace std;

string s;

string res = "hello";

int t = 0;

int main(){
    cin >> s;

    for(char c: s){
        if(c == res[t]){
            if(++t == 5) break;
        }
    }

    cout << ((t == 5) ? "YES" : "NO");

    return 0;
}