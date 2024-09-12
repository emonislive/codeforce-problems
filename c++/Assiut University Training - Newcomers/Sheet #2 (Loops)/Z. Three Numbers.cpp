#include <iostream>
using namespace std;
#define endl '\n'

void solve(int range, int s){

    int c = 0, z = 0;
    for (int x = 0; x <= range; x++){
        for(int y = 0; y <= range; y++){
            z = s - (x + y);                // given, X + Y + Z = S
            if (0 <= z && z <= range)
                c++;
        }
    }
    cout << c << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int range, s;
  
    cin >> range >> s; 
    solve(range, s);
            
    return 0;
}
