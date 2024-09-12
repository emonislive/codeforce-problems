#include <iostream>
using namespace std;
#define endl '\n'

void solve(int in)
{
    int c;
    for (int i = 2; i <= in; i++){
        c = 0;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                c = 1;
                break;
            }
        }
        if (c == 0){
            cout << i << " ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int in;
  
    cin >> in;
    solve(in);

    return 0;
}
