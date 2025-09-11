/*
 ! Example:
 ? seats = 5   (so total seats = (5 * 2) = 10)
 ? teamA = 4   (row1-only monkeys)
 ? teamB = 2   (row2-only monkeys)
 ? teamC = 10  (flexible monkeys)
 ============================================
 ? teamA = min(5,4) = 4 → row1 seats used = 4
 ? teamB = min(5,2) = 2 → row2 seats used = 2

 ? total used so far = 6
 ? remainingSeats = (total seats - total used so far) = (10 - 6) = 4
 ? teamC = min(10,4) = 4
*/

#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    ll seats, teamA, teamB, teamC, remainingSeats, maxCanSeat;
    cin >> seats >> teamA >> teamB >> teamC;

    teamA = min(seats, teamA);
    teamB = min(seats, teamB);

    ll totalSeats = 2 * seats;
    ll seatTaken = teamA + teamB;
  
    remainingSeats = totalSeats - seatTaken;
    teamC = min(remainingSeats, teamC);
  
    maxCanSeat = teamA + teamB + teamC;
    cout << maxCanSeat << endl;
}

int main()
{
    fastIO();
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
