#include <iostream>
using namespace std;
#define endl '\n'
#define ld long double

void solve(ld a)
{
  if (a >= 0 && a <= 25.0000)
    cout << "Interval [0,25]" << endl;
  else if (a >= 25.00001 && a <= 50.0000000)
    cout << "Interval (25,50]" << endl;
  else if (a > 50.0000000 && a <= 75)
    cout << "Interval (50,75]" << endl;
  else if (a > 75 && a <= 100)
    cout << "Interval (75,100]" << endl;
  else
    cout << "Out of Intervals" << endl;
}

int main()
{
  ios::sync_with_stdio(false); cin.tie(NULL);

  ld a;
  cin >> a;
  
  solve(a);
  return 0;
}
