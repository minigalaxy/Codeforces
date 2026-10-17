#include <iostream>

using namespace std;

string name;

int res = 0;

int main(){
    cin >> name;

    for(int i = 0, pointer = 0; i < name.size(); i++){
        int target = name[i] - 'a';

        if(target != pointer){
            res += min((target + 26 - pointer) % 26, (pointer + 26 - target) % 26);
            pointer = target;
        }
    }

    cout << res;

    return 0;
}