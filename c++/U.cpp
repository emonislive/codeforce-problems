// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
// #define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int condition1, condition2;
	double input, fOutput;
	cin >> input;

	condition1 = ceil(input);				// ceiling math
	condition2 = floor(input);				// floor math
	
	fOutput = input - condition2; 
	
	if (condition1 == condition2)			// ex: if input - 3.01 then ceil = 4, floor = 3
		cout << "int " << condition1 << endl;
	else									// ex: if input - 3.0 then ceil = 3, floor = 3
		cout << "float " << condition2 << " " << fOutput << endl;

	return 0;
}
