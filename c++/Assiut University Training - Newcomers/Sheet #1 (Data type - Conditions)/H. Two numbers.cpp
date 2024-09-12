#include <iostream>
using namespace std;
#define endl '\n'
#define ld long double

void solve(int a, int b)
{
    int ceil = (a + b - 1) / b;
    int floor = (a - (a % b)) / b;

    printf("floor %d / %d = %d\n", a, b, floor);
    printf("ceil %d / %d = %d\n", a, b, ceil);

    /*  
        here i separated the fraction out of the float number 
        ex. (a/b) = 5.444(div value), 
        5.444(div value) - 5(floor value) = 0.444(dif value)
        by comparing the dif value, the ROUND can be calculated easily.
    */ 
    ld div = (long double)a / b;
    ld dif = div - floor;
    
    // round
    if (dif >= 0.5)
        printf("round %d / %d = %d", a, b, ceil);
    else
        printf("round %d / %d = %d", a, b, floor);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
