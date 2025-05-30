#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &vec, int &n)
{
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++)
        freq[vec[i]] = i + 1;

    for (int i = 1; i < n + 1; i++)
        cout << freq[i] << " ";
    
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n, 0);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    solve(vec, n);

    return 0;
}

/*
! Question Analyzing

[give reciever] 4 <- 1 [gift giver]
[give reciever] 1 <- 2 [gift giver]
[give reciever] 2 <- 3 [gift giver]
[give reciever] 3 <- 4 [gift giver]


input  : 2 3 4 1
output : 4 1 2 3
*/
