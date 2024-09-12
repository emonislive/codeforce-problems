#include <iostream>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	short a, b;
	cin >> a >> b;

	if (a > b || a == b)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}
