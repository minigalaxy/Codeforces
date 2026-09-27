#include <iostream>

using namespace std;

string s;

int main(){
    cin >> s;

    while(s.size() >= 3 && s.substr(0, 3) == "WUB") s.erase(0, 3);
    while(s.size() >= 3 && s.substr(s.size() - 3, 3) == "WUB") s.erase(s.size() - 3, 3);

    for(int i = 0; i < s.size(); i++){
        if(i + 2 < s.size() && s.substr(i, 3) == "WUB"){
            cout << ' ';
            i += 2;
        }
        else cout << s[i];
    }

    return 0;
}