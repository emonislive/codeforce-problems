#include <iostream>
#include <utility>
using namespace std;
#define endl '\n'

pair<int, int> swap(int firstNumber, int secondNumber)
{
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    return make_pair(firstNumber, secondNumber);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    pair<int, int> swappedValue = swap(firstNumber, secondNumber);
    cout << swappedValue.first << " " << swappedValue.second << endl;

    return 0;
}
