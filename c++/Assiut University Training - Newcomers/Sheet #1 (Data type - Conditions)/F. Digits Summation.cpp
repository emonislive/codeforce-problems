#include <iostream>
using namespace std;
#define endl '\n'
#define int long long
 
signed main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
 
	int a, b, num1, num2;
	cin >> a >> b;
 
	num1 = a % 10;
	num2 = b % 10;

	cout << num1 + num2 << endl;
	return 0;
}
