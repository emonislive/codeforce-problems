#include <iostream>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(string s1, string s2) {
    string s3 = s1 + s2;
    int len1 = s1.length();
    int len2 = s2.length();

    swap(s1[0], s2[0]);
    cout << len1 << " " << len2 << endl;
    cout << s3 << endl;
    cout << s1 << " " << s2 << endl;

}
int main() {
    optimize();
    string s1, s2;
    cin >> s1 >> s2;
    solve(s1, s2);
    return 0;
}
