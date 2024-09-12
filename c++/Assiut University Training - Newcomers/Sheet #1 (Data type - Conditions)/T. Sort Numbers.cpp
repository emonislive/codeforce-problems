// method 1 (time: 77 ms, memory: 44 KB) 
#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c)
{
    int arr[3];
    arr[0] = a, arr[1] = b, arr[2] = c;
    // sorting asc to desc order
    sort(arr, arr + 3);
    // printing the sorted order
    for (auto i:arr) {
        cout << i << endl;
    }
    // printing the original order
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    
    solve(a, b, c);
    return 0;
}

// method 2 (time: 77 ms, memory: 20 KB) 
#include <iostream>
using namespace std;
#define endl '\n'
#define int long long

signed main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b, c, temp, i = 3;
	int t1, t2, t3;
	cin >> a >> b >> c;
 
	t1 = a; // storing the original values to temporary variables
	t2 = b;
	t3 = c;
	
	if (a > b) // swap(a,b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c) // swap(b,c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b) // swap(a,b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	cout << a << endl << b << endl << c << endl << endl;
	cout << t1 << endl << t2 << endl << t3 << endl;
	return 0;
}
