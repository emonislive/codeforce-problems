#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n' 

void solve()
{
    int size, sum = 0; 

    cin >> size; 
    vector<int> colors(size);  
    
    for (int i = 0; i < size; i++) {
        cin >> colors[i];
    }
    // sorting to group into two, the smallest ones on one side and the largest ones in the other side
    sort(colors.begin(), colors.end()); 

    for (int i = 0, j = size - 1; i < size / 2; i++, j--) {
        sum += colors[j] - colors[i];  // adding the difference between paired elements
    }
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int testCase;  

    cin >> testCase; 
    while (testCase--) {  
        solve();
    }
    return 0;
}
