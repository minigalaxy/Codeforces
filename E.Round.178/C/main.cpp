#include <iostream>
#include <string>

using namespace std;

int t;

int n;

string card;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> card;
        
        if(card[0] == 'A'){
            if(card[n - 1] == 'A') cout << "Alice\n";
            else {
                bool f = true;
                
                for(int j = n - 2; j > 0 && f; j--){
                    if(card[j] == 'B') f = false;
                }
                
                cout << ((f) ? "Alice\n" : "Bob\n");
            }
        } else {
            if(card[n - 1] == 'B') cout << "Bob\n";
            else {
                if(n > 2){
                    if(card[n - 2] == 'B') cout << "Bob\n";
                    else cout << "Alice\n";
                } else cout << "Bob\n";
            }
        }
    }
    
    return 0;
}
