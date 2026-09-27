#include <iostream>

using namespace std;

string s;

bool a[26] = { false, };

int res = 0;

int main(){
    getline(cin, s);

    for(int i = 1; i < s.size(); i += 3){
        if(!a[s[i] - 'a']){
            a[s[i] - 'a'] = true;
            res++;
        }
    }

    cout << res;

    return 0;
}