#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b, c, ans;
	char expr1, expr2;
	cin >> a >> expr1 >> b >> expr2 >> c;

	switch (expr1)
  {
		case '+':
			ans = a + b;
			break;
		case '-':
			ans = a - b;
			break;
		case '*':
			ans = a * b;
			break;
	}
  
	if (c == ans)
		cout << "Yes" << endl;
	else
		cout << ans << endl;

	return 0;
}
