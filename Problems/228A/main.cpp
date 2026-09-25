#include <iostream>
#include <algorithm>

using namespace std;

int s[4];

int res = 0;

int main(){
    cin >> s[0] >> s[1] >> s[2] >> s[3];

    sort(s, s + 4);

    for(int i = 0; i < 3; i++){
        if(s[i] == s[i + 1]) res++;
    }

    cout << res;

    return 0;
}