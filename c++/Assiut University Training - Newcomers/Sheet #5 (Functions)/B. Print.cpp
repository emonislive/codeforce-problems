#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

vector<int> print(int size)
{
    vector<int> printVector;
    for (int i = 1; i <= size; i++)
    {
        printVector.push_back(i);
    }
    return printVector;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int size;
    cin >> size;

    vector<int> printVector = print(size);

    for (int i = 0; i < printVector.size(); i++)
    {
        if (i != printVector.size() - 1)
            cout << printVector[i] << " ";
        else
            cout << printVector[i] << endl;
    }
    return 0;
}
