#include <iostream>

using namespace std;

int t;

int x, y;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        int res = 0;

        cin >> x >> y;

        int n = 1;

        while(x && y){
            if(x % 2 == 1 && y % 2 == 1){
                res += n;
                x++;
                y++;
            }
            n *= 2;
            x /= 2;
            y /= 2;
        }

        cout << res;

        if(((x + res) & (y + res))) res = -1;

        cout << res << '\n';
    }

    return 0;
}
