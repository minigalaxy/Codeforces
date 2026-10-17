#include <iostream>

using namespace std;

int t;

int n;

int a;

int c[2];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        c[0] = 0, c[1] = 0;

        for(int j = 0; j < n; j++){
            cin >> a;

            if(a == -1) c[0]++;
            else c[1]++;
        }

        int res = 0;

        while(c[0] > c[1]) c[1]++, c[0]--, res++;

        if(c[0] % 2 == 1) c[0]--, res++;

        cout << res << '\n';
    }

    return 0;
}