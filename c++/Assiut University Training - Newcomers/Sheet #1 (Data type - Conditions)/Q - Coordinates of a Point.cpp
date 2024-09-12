#include <iostream>
using namespace std;
#define endl '\n'
/*
              Y
              |
Q2 (-x) (+y)  |   Q1 (+x) (+y)
              |
----------------------------- X
              |
Q3 (-x) (-y)  |   Q4 (+x) (-y)
              |
              |
*/

void solve(double x, double y)
{
    // If the point is at the origin
    if (x == 0 && y == 0)
        cout << "Origem";
    // If the point is over X axis
    else if (y == 0 && x != 0)
        cout << "Eixo X";
    // if the point is over Y axis
    else if (y != 0 && x == 0)
        cout << "Eixo Y";
    else
    {
        // Quadrants
        if (x > 0 && y > 0) // Q1 = (+x) (+y)
            cout << "Q1";
        else if (x > 0 && y < 0) // Q4 = (+x) (-y)
            cout << "Q4";
        else if (x < 0 && y > 0) // Q2 = (-x) (+y)
            cout << "Q2";
        else if (x < 0 && y < 0) // Q3 = (-x) (-y)
            cout << "Q3";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double x, y;
    cin >> x >> y;
    solve(x, y);
    return 0;
}
