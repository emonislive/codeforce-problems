#include <iostream>
using namespace std;
#define endl '\n'

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b, c = 0;
	char ch;
	cin >> a >> ch >> b;
	switch(ch)
  {
		case '<':
			  if (a < b)
				  c++;
			break;
		case '>':
			  if (a > b)
				  c++;
			break;
		case '=':
			  if (a == b)
				  c++;
			break;
	}
	if (c) 
		cout << "Right" << endl;
	else
		cout << "Wrong" << endl;
	
	return 0;
}
