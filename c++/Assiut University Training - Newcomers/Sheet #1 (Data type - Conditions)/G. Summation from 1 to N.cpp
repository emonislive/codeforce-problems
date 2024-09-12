#include <iostream>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, sum = 0;
	cin >> a;
	
  sum = (a * 1ll * (a + 1)) / 2; // 1ll used to avoid overflow, 64 bits supports
	cout << sum << endl;
	return 0;
}
