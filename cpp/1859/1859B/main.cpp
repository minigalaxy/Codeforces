#include <iostream>

using namespace std;

int t;

int n;

int m;

int a[25'000][2];

int diff[25'000];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> m;

            a[j][0] = a[j][1] = 1'000'000'000;

            for(int k = 0, t = 0; k < m; k++){
                cin >> t;

                if(t <= a[j][0]){
                    a[j][1] = a[j][0];
                    a[j][0] = t;
                }
                else if(t < a[j][1]) a[j][1] = t;
            }
            
            diff[j] = a[j][1] - a[j][0];
        }
        
        
    }

    return 0;
}