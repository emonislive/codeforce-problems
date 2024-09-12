#include <iostream>
#include <iomanip>
using namespace std;
#define ld long double

void solve(ld discount, ld priceAfterDiscount)
{
    /*              _              _
          p        |      discount  |
    x = -------    | d = ---------- |
        (1- d)     |         100    |
                   |_              _|        
    the formula to find the actual price from discounted price: p = (1 - d) * x
    */
    discount /= 100;
    discount = 1 - discount;
    ld originalPrice = priceAfterDiscount / discount;
    cout << fixed << setprecision(2) << originalPrice;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ld discount, priceAfterDiscount;

    cin >> discount >> priceAfterDiscount;
    solve(discount, priceAfterDiscount);

    return 0;
}
