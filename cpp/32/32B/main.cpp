#include <iostream>

using namespace std;

string s;

string res;

int main(){
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.') res += '0';
        else if(s[i + 1] == '.'){
            res += '1'; 
            i++;
        }
        else {
            res += '2';
            i++;
        }
    }

    cout << res;

    return 0;
}