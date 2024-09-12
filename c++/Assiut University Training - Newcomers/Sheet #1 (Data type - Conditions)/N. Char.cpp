#include <iostream>
using namespace std;
#define endl '\n'
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	char a;
	cin >> a;

	if (a >= 65 && a <= 90)
  {
		a = a + 32;
		cout << a << endl;
  }
	else if (a >= 97 && a <= 122)
  {
		a = a - 32;
		cout << a << endl;
  }
	else
		exit(0);

	return 0;
}
