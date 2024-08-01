#include <iostream>
using namespace std;
#define endl '\n'

void solve(int in){
    int i;
    cout << 1 << endl;
    for (i = 2; i < in; i++) {
        if (in % i == 0){
            cout << i << endl;
        }
    }
    cout << in << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int in;
    cin >> in; 
    solve(in);
            
    return 0;
}
