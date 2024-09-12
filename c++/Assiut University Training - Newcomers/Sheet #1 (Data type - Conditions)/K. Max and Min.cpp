// method 1
#include <iostream>
using namespace std;
#define endl '\n'
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a,b,c;
	cin >> a >> b >> c;

	if (a > b) swap (a,b);
	if (b > c) swap (b,c);
	if (a > b) swap (a,b);

	cout << a << " " << c << endl;
	return 0;
}

// method 2 (using STL)
#include <iostream>
using namespace std;
#define endl '\n'
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a,b,c, maxNum, minNum;
	cin >> a >> b >> c;

	maxNum = max(a, max(b,c)); 
	minNum = min(a, min(b,c));

	cout << minNum << " " << maxNum << endl;
	return 0;
}
