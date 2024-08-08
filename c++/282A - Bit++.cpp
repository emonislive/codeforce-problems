#include <iostream>
using namespace std;
#define endl '\n'

int solve(string input) {
    int x = 0; 
    if(input == "++X")
        ++x;
    else if (input == "X++")
        x++;
    // if x > 0 then return x or return -1 because --x or x-- decrement the value of x by 1,so to minus the value we return -1. 
    if (x > 0)
        return x;
    else
        return -1;    
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int test, result = 0;
    string input;
  
    cin >> test;
    for (int i = 0; i < test; i++){
        cin >> input;
        result = result + solve(input);
    }

    cout << result << endl;
    return 0;
}
