#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int stringSize) {
    vector<int> charCount(26, 0);
    char charInput;
    for (int i = 0; i < stringSize; i++) {
        cin >> charInput;
        // Convert character to an index (0-25) based on 'a'
        int charToVectorAddress = charInput - 'a';
        // Increment the frequency of the character
        charCount[charToVectorAddress]++;
    }
    for (int i = 0; i < 26; i++) {
        // If the current character (represented by index `i`) exists in the input
        if (charCount[i] != 0) {
            // this condition handles if there are more than one same character exists or not. for ex. aaaa, charCount[0] = 4
            while (charCount[i]--) {
                // Convert the index back to a character
                char vectorAddressToChar = i + 97;
                cout << vectorAddressToChar;
            }
        }
    }
}

int main() {
    fastIO();  // for fast input/output
    int stringSize;

    cin >> stringSize;
    solve(stringSize);

    return 0;
}
