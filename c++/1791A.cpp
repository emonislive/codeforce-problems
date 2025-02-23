#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(char alphabet)
{
    /*   
    advantage of using switch-case over if-else condition is that in switch case you cannot add same case twice. it notifies that part as error
    so it helps to track the overlapping problem
    you can use if-else condition to solve this problem, works the same
    */
    switch (alphabet){
        case 'c':
        case 'o':
        case 'd':
        case 'e':
        case 'f':
        case 'r':
        case 's':
            cout << "YES" << endl;
            break;
        default:
            cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    char alphabet;
    cin >> test;
    while(test--){
        cin >> alphabet;
        solve(alphabet);
    }
    return 0;
}
