#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(string s){
    for (int i = 0; i < s.length(); i++) {
        switch(s[i]) {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
            case 'Y':
            case 'y':
                s.erase(s.begin()+i);
                i--;
                break;
        }
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.length(); i++) {
        cout << "." << s[i];
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s;

    cin >> s;
    solve(s);

    return 0;
}
