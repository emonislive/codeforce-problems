#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    string encoder, decoder;
    cin >> encoder;
    for (int i = 0; i < encoder.length();) {
        if (encoder.substr(i, 2) == "-.") {
            decoder.push_back('1');
            i += 2;
        }
        else if (encoder.substr(i, 2) == "--") {
            decoder.push_back('2');
            i += 2;
        }
        else if (encoder.substr(i, 1) == ".") {
            decoder.push_back('0');
            i++;
        }
    }
    cout << decoder << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
