// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

#define endl '\n'
// #define ll long long
#define ld long double

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	// double is used because some log(x) produce precision so it helps getting accurate answer
	ld a, b, c, d;	
	cin >> a >> b >> c >> d;
	
	// to avoid overflow we reduce the x value by log(x)
	a = log(a) * b;
	c = log(c) * d;
	
	if (a > c)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
