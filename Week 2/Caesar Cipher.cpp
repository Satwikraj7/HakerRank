#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; string s; int k;
    cin >> n >> s >> k;
    k %= 26;
    for(char &c : s){
        if(isalpha(c)){
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + k) % 26 + base;
        }
    }
    cout << s;
}
