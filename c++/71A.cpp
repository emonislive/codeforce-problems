// Submit Date: 12/07/24

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a, i, len, len2;
    
    cin >> a;
    for (i = 0; i < a; i++){
        
        cin >> s;
        len = s.length();
    
        if (len > 10){
            len2 = len-2;
            cout << s[0] << len2 << s[len-1] << endl;
        }
        else
            cout << s << endl;
    }
    return 0;
}
