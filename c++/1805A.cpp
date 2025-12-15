#include <iostream>
#include <vector>
#include <random>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int randomNumber() {
    // ! Static engine - created ONLY ONCE
    static mt19937 engineInit(random_device{}());             // ? Random number engine initialization [from random.h]
    static uniform_int_distribution<int> randomRange(0,255);  // ? Range Define [from random.h]
    int number = randomRange(engineInit);                     // ? Generate random number
    return number; 
}

void solve() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    int totalXOR = 0;
    for (int i = 0; i < size; i++)
        totalXOR ^= arr[i];

    if (size % 2 != 0)
        cout << totalXOR << endl;
    else {
        if (totalXOR == 0)
            cout << randomNumber() << endl;
        else 
            cout << -1 << endl;
    }
}

int main() {
    fastIO();
    int tc;

    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
