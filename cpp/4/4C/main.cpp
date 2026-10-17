#include <iostream>

using namespace std;

struct Trie {
    Trie* child[26];

    int copies;

    Trie() : child(), copies(-1) {}

    void insert(string& key, int index){
        if(index == key.size()){
            if(copies == -1){
                cout << "OK" << '\n';
                copies = 0;
            } else {
                copies++;
                cout << key << copies << '\n';
            }
        } else {
            int next = key[index] - 'a';
            if(child[next] == nullptr) child[next] = new Trie;
            child[next] -> insert(key, index + 1);
        }
    }
};

int n;

string s;

Trie t;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        t.insert(s, 0);
    }

    return 0;
}