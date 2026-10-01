#include <iostream>

using namespace std;

string s;

int u = 0;

int main(){
    cin >> s;

    for(char c: s) if(c < 'a') u++;

    if(u > s.size() - u){
        for(char& c: s){
            if(c >= 'a') c = c - 'a' + 'A';
        }
    } else {
        for(char& c: s) {
            if(c < 'a') c = c - 'A' + 'a';
        }
    }

    cout << s;

    return 0;
}