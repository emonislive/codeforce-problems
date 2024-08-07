#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a,int b,int c) {
  
    if (a < b && b < c)
        cout << "STAIR" << endl;
    else if (a < b && b > c)
        cout << "PEAK" << endl;
    else
        cout << "NONE" << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a, b, c, test;
    cin >> test;
    while(test--){
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    return 0;
}
