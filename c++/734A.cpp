#include <iostream>
using namespace std;
#define endl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);

void solve(int size) {
    char match[size];
    for (int i = 0; i < size; i++) {
        cin >> match[i];
    }
  
    int a = 0, d = 0;
    for (int i = 0; i < size; i++) {
        if (match[i] == 'A')
            a++;
        if (match[i] == 'D')
            d++;
    }
    if (a == d)
        cout << "Friendship" << endl;
    else if (a > d)
        cout << "Anton" << endl;
    else
        cout << "Danik" << endl;
}

int main() 
{
    fastIO();
    int size;
  
    cin >> size;
    solve(size);
  
    return 0;
}
