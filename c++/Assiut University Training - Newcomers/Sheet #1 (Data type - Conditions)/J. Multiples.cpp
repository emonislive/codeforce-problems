#include <iostream>
using namespace std;
#define endl '\n'
#define int long long

signed main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b;
	cin >> a >> b;
	
	if (a % b == 0)
		cout << "Multiples" << endl;
	else if (b % a == 0)
		cout << "Multiples" << endl;
	else
		cout << "No Multiples" << endl;
	
	return 0;
}
