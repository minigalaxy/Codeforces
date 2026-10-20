#include <iostream>

using namespace std;

int t;

int n;

char c;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> c;

        cin >> s;

        s += s;

        int res = 0;

        if(c != 'g'){
            for(int j = 0, cur = 0; j < n * 2; j++){
                if(cur == 0){
                    if(s[j] == c) cur = 1;
                } else {
                    if(s[j] == 'g'){
                        res = max(res, cur);

                        cur = 0;
                    }
                    else cur++;
                }
            }
        }
        

        cout << res << '\n';
    }

    return 0;
}