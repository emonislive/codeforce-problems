#include <iostream>
 
#define ll long long
#define ld long double
#define endl '\n'
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a;
    string s1, s2, t1, t2;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> s1 >> s2;
        t1[0] = s1[0];   
        t2[0] = s2[0];
        
        s2[0] = t1[0];      
        s1[0] = t2[0];
 
        cout << s1 << " " << s2 << endl;
    }
    return 0;
}   
