#include <iostream>

using namespace std;

#define endl '\n'
#define int long long

signed main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int a, b, c, temp, i = 3;
	int t1, t2, t3;
	
	cin >> a >> b >> c;

	t1 = a; // storing the original values to temporary variables
	t2 = b;
	t3 = c;
	
	if (a > b) // swap(a,b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c) // swap(b,c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b) // swap(a,b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	cout << a << endl << b << endl << c << endl << endl;
	cout << t1 << endl << t2 << endl << t3 << endl;
	return 0;

}
