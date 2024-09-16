#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve()
{
    ll num, two = 0, three = 0;
    cin >> num;

    // Count the number of times num is divisible by 2
    while (num % 2 == 0)
    {
        two++;
        num /= 2;
    }

    // Count the number of times num is divisible by 3
    while (num % 3 == 0)
    {
        three++;
        num /= 3;
    }
  
    /*
     * Check if the remaining num is 1 and the number of 2's is less than or equal to the number of 3's
     * Explanation:
     * After removing all factors of 2 and 3, `num` should be 1. If it's not, it means there were other prime factors.
     * `two <= three` ensures that the number of 2's is not more than the number of 3's.
     * This is because we can only multiply by 2 to add more 2's, but we cannot directly add more 3's.
     * If there are more 2's than 3's, it will be impossible to balance them using the allowed operations.
     * Therefore, for the transformation to 1 to be possible:
     * `num` must be composed of only the prime factors 2 and 3.
     * The count of 2's (two) must be less than or equal to the count of 3's (three).
     */
  
    if (num == 1 && two <= three)
    {
        /*
         * Calculate the number of steps needed
         * (three - two) steps to make the number of 2's equal to the number of 3's
         * by multiplying by 2 (since each multiply by 2 increases the count of 2's).
         * three steps to make the remaining 3's become 1 (since each division by 6 reduces the count of 3's).
         */
      
        ll ans = (three - two) + three;
        cout << ans << endl;
    }
    else
    {
        // If the conditions are not met, output -1 indicating it's not possible
        cout << -1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
