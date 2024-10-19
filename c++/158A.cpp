#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int size, int position)
{
    vector<int> vec(size);
    int count = 0;

    for (int i = 0; i < size; i++) {
        cin >> vec[i];
    }
    // [positive - 1] is used because vector indexing starts from 0 rather than 1.
    int score = vec[position - 1];

    for (int i = 0; i < size; i++) {
        // check if the value is positive integer or not.
        // positive int starts from: 1,2,3..........(inf.)
        if (vec[i] > 0) {
            if (score <= vec[i])
                count++;
        }
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int size, position;
    cin >> size >> position;

    solve(size, position);
    return 0;
}
