#include <iostream>
#include <string>

using namespace std;

int t;

int n;
int b[100];

string s;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n - 2; j++) cin >> b[j];

        s = "YES";

        for(int j = 0; j < n - 4; j++){
            if(b[j] && !b[j + 1] && b[j + 2]){
                s = "NO";
                break;
            }
        }

        cout << s << '\n';
    }

    return 0;
}
