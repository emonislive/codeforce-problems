#include <iostream>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	string firstName1, lastName1, firstName2, lastName2;
	
	cin >> firstName1 >> lastName1;
	cin >> firstName2 >> lastName2;

	if (lastName1 == lastName2)
		cout << "ARE Brothers" << endl;
	else
		cout << "NOT" << endl;
  
	return 0;

}
