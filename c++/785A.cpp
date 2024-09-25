#include <iostream>
using namespace std;
#define optimization() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

void solve() {
    int c = 0, n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "Tetrahedron")
            c += 4;
        else if (s == "Cube")
            c += 6;
        else if (s == "Octahedron")
            c += 8;
        else if (s == "Dodecahedron")
            c += 12;
        else if (s == "Icosahedron")
            c += 20;
    }
    cout << c << endl;
}

int main()
{
    optimization();
    solve();
    return 0;
}
