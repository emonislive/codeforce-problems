#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(string s, string s2){
    reverse(s.begin(), s.end());
    if (s == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s, s2;
    
    cin >> s >> s2;
    solve(s, s2);

    return 0;
}
