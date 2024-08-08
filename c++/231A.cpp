#include <iostream>
using namespace std;
#define endl '\n'

int solve(int a, int b, int c) {
    int count = 0;
    if ((a == 1 && b == 1) || (b == 1 && c == 1) || (a == 1 && c == 1)){
        count++;
    }
    return count;    
}

int main() {
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int test, a, b, c, result = 0;
    cin >> test;
    
    while(test--){
        cin >> a >> b >> c;
        result = result + solve(a, b, c);
    }
    cout << result << endl;
    return 0;
}
