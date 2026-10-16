#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

struct Response
{
    int a, b, n;
};

Response r[50];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> r[j].a >> r[j].b;
            r[j].n = j;
        }

        sort(r, r + n, [&](Response &a, Response &b){
            if(a.a <= 10 && b.a <= 10) return a.b > b.b;
            else if(a.a <= 10) return true;
            else if(b.a <= 10) return false;
            else return false;
        });

        cout << r[0].n + 1 << '\n';
    }

    return 0;
}