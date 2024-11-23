#include <iostream>
using namespace std;
#define endl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);

void solve(int distance) {
    int steps = 0;
    while (true) {
        if (distance <= 0)
            break;

        steps++;
        
        if (distance >= 5)
            distance -= 5;
        else if (distance == 4)
            distance -= 4;
        else if (distance == 3)
            distance -= 3;
        else if (distance == 2)
            distance -= 2;
        else
            distance--;
    }
    cout << steps << endl;
}

int main() {
    fastIO();
    int distance;
    cin >> distance;
    solve(distance);
    return 0;
}
