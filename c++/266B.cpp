#include <iostream>
using namespace std;
#define endl '\n'
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(int lineSize, int seconds) {
    char ch;
    string line;
    int totalBoys = 0;
    for (int i = 0; i < lineSize; i++) {
        cin >> ch;
        line.push_back(ch);
        if (ch == 'B')
            totalBoys++;
    }

    int totalTime = seconds * totalBoys;
    while (seconds--) {
        for (int i = 0; i < lineSize - 1; i++) {
            if (totalTime == 0 || i == lineSize - 1)
                break;
            if (line[i] == 'B' && line[i + 1] == 'G') { // ? B = boy, G = girl [in the line]
                swap(line[i], line[i + 1]);
                totalTime--;
                i++;
            }
        }
    }
    cout << line << endl;
}

int main() {
    fast_io();
    int lineSize, seconds;
    cin >> lineSize >> seconds;
    solve(lineSize, seconds);
    return 0;
}
