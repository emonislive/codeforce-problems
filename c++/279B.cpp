/*
 TODO: INSTALL : "Better Comments" EXTENTION for highlighted comments (* - green, ? - blue, ! - red, TODO: - orange)
 TODO: INSTALL : "TODO Highlight" EXTENSION for highlight specific word (TODO: , FIXME:, etc.. customizable)
 TODO: INSTALL : "Fira Code" (Bold) FONT and add the FONT as your main FONT in your IDE/TEXT EDITOR to beautify the syntax
 TODO: INSTALL : "SynthWave '84" COLOR THEME to finalize the beautification for your IDE/TEXT EDITOR

 You will thank me later :)
*/

#include <iostream>
#include <vector>

using namespace std;
#define endl '\n'
#define ll long long

void solve(ll size) {
    vector<ll> books(size);
    ll timeHas, timeNeed = 0;

    cin >> timeHas;

    for (ll i = 0; i < size; i++) {
        cin >> books[i];
    }

    ll left = 0, maxBooks = 0; // 'left' is the start index of the sliding window; 'maxBooks' stores the maximum number of books that can be read.

    for (ll right = 0; right < size; right++) {
        timeNeed += books[right];    // Add the current book's time to the current window sum.

        // If the current window's total time exceeds the available time, adjust the window by moving 'left' forward.
        while (timeNeed > timeHas) { // Continue removing books from the left until the total time is within the allowed limit.
            timeNeed -= books[left]; // Remove the book at the 'left' index from the current window sum.
            left++;                  // Move the left boundary of the window to the right.
        }

        // Update maxBooks if the current window size (right - left + 1) is larger than the previously recorded maximum.
        maxBooks = max(maxBooks, right - left + 1);
    }
    cout << maxBooks << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll size;

    cin >> size;
    solve(size);

    return 0;
}
