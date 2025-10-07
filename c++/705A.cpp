#include <iostream>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fastIO();

    int size;
    cin >> size;

    string finalMsg = "I hate";
    string midMsgA = " that I love";
    string midMsgB = " that I hate";
    string lastMsg = " it";

    if (size == 1)
    {
        cout << finalMsg << " " << lastMsg << endl;
        return 0;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (i % 2 == 0)
            finalMsg += midMsgA;
        else
            finalMsg += midMsgB;
    }
    finalMsg += lastMsg;
    cout << finalMsg << endl;

    return 0;
}
