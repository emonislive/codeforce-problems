#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int n)
{
  string convToStr = to_string(n);

  bool flag = true;
  for (int i = 0; i < convToStr.size(); i++)
  {
    if (convToStr[i] != '4' && convToStr[i] != '7')
    {
      flag = false;
      break;
    }
  }

  if (flag == true)
    cout << "YES" << endl;
  else
  {
    vector<int> luckyNum = {4, 7, 47, 74, 447, 474, 477, 744, 747, 774};
    for (int i = 0; i < luckyNum.size(); i++)
    {
      if (n % luckyNum[i] == 0)
      {
        flag = true;
        break;
      }
    }

    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  solve(n);
  return 0;
}
