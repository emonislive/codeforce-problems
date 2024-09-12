#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
	/*
	every variable have the range of max 10e9. a, b, c, d = 10e9 x 10e9 x 10e9 x 10e9 = 10e36
	long long int has a max limit of 10e18. So we will face limit overflow if we use normal method.
	the question asked to print the last 2 digit of the multiplication. So to bypass the overflow 
	problem we can get that last 2 digit by just multiplying the last two digit of each variable 
	to each other. 
	ex: 134 x 154 x 333,  last two digit: 34 x 54 x 33 = ....
	by this way we can bypass the limit and get our expected result
	*/
  
	ios::sync_with_stdio(false); cin.tie(NULL);
	ll a, b, c, d, n1,n2;
	cin >> a >> b >> c >> d;

	a %= 100; 	// getting the last 2 digit of the input value
	b %= 100;
	c %= 100;
	d %= 100;

	ll mul = a * b * c * d * 1ll;

	n1 = mul % 10;  // last num
	mul = mul / 10;
	n2 = mul % 10;	// 2nd last num

	cout << n2 << n1 << endl;
	return 0;
}
