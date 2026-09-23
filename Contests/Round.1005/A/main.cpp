#include <iostream>
#include <queue>

using namespace std;

int t;

int n;

bool s[1000];

int res;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        fill(s, s + 1000, false);
        res = 0;

        cin >> n;

        cin.ignore();

        for(int j = 0; j < n; j++) s[j] = getchar() - '0';

        cin.ignore();

        bool t = false;

        for(int j = 0; j < n; j++){
            if(s[j] != t){
                t = s[j];
                res++;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
