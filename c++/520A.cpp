#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(int size) {
    string msg;
    char ch;
    for (int i = 0; i < size; i++) {
        cin >> ch;
        msg.push_back(ch);
    }
    if (msg.length() < 26) {
        cout << "NO" << endl;
        return;
    }
    // converting every characters into lowercase
    transform(msg.begin(), msg.end(), msg.begin(), ::tolower);
    
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int flag;
    
    for (int i = 0; i < 26; i++) {
        flag = 0;
        for (int j = 0; j < size; j++) {
            if (letters[i] == msg[j]) {
                flag = 1;
                // cout << letters[i] << " "; // ! for debugging
                
                // this is used to stop counting the duplicates becasue it is unnessesary. it makes the code more efficient.                
                break; 
            }
        }
        if (flag == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int size;
    
    cin >> size;
    solve(size);
    
    return 0;
}
