#include <iostream>

using namespace std;

int n;

int p[2'001];

int res = 0;

int main(){
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> p[i];

    for(int i = 1; i <= n; i++){
        int depth = 0, cur = i;

        while(true){
            res = max(res, ++depth);
            
            if(p[cur] == -1) break;
            else cur = p[cur];
        }
    }

    cout << res;

    return 0;
}