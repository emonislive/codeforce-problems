// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
#define ld long double

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	ld a, b, c, d;
	cin >> a >> b >> c >> d;
	
	a = log(a) * b;		// to avoid overflow we reduce the x value by log(x)
	c = log(c) * d;
	
	if (a > c)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
