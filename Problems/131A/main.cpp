#include <iostream>

using namespace std;

string s;

bool caps = true;

int main(){
    cin >> s;

    for(int i = 1; i < s.size(); i++){
        if(s[i] >= 'a') caps = false;
    }

    if(s.size() == 1 && s[0] < 'a') caps = false;

    if(caps){
        for(char c: s){
            if(c >= 'a') cout << char(c - 'a' + 'A');
            else cout << char(c - 'A' + 'a');
        }
    }
    else cout << s;

    return 0;
}