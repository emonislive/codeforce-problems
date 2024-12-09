#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void solve(int size)
{
    vector<int> frequency(1001, 0), array(size);
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        frequency[array[i]]++;
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int nextNumber = array[i] + 1;
        if (frequency[nextNumber] > 0)
            count++;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int size;
    cin >> size;
    solve(size);
    return 0;
}
