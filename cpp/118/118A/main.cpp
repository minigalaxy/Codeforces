#include <iostream>

using namespace std;

string s, res;

int main(){
    cin >> s;

    for(char c: s){
        if(c < 'a') c = c - 'A' + 'a';

        if(c != 'a' && c != 'o' &&  c != 'y' && c != 'e' && c != 'u' && c != 'i') res += c;
    }

    for(char c: res) cout << '.' << c;

    return 0;
}