#include <iostream>

using namespace std;

int t;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s;

        for(char& c: s){
            if(c >= 'a') c = c - 'a' + 'A';
        }

        if(s == "YES") cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}