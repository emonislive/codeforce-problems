#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);

void solve(int size) {
    string s;
    char ch;
    for (int i = 0; i < size; i++) {
        cin >> ch;
        s.push_back(ch);
    }
  
    vector<int> freq(26, 0);            // * Initializing frequency counting vector with 0; 
    for (int i = 0; i < size; i++) {    // * Counting the frequency of the upper-case alphabets (A-Z)
        int pos = s[i] - 'A';
        freq[pos]++;
    }

    int sum = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            sum += freq[i] + 1;         // * Adding extra 1 for each new alphabet that appears
    }
    cout << sum << endl;

/*  // ! For Debugging
    for (int i = 0; i < 26; i++) {
        char ch = i + 'A';
        cout << ch << " --> " << freq[i] << endl;
    }
*/
}

int main() {
    fastIO();
    int size, testCase;
    cin >> testCase;
    while (testCase--) {
        cin >> size;
        solve(size);
    }
    return 0;
}
