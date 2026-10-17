#include <iostream>

using namespace std;

int t;

int n;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cin >> s;

        int res = 0, c = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == ')'){
                if(c > 0) c--;
                else res++;
            }
            else c++;
        }

        cout << res << '\n';
    }

    return 0;
}