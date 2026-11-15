#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

/*
 ? The problem understanding: 
 * there is a pre-written signal given to us to verify if the written signal matches with
 * the machines built in signal channel, if not then minimum overwrite needed for the pre-written signal to match it.
 */

void solve() {
    int size{}, manual_switch_need{};
    std::cin >> size;

    std::string light_signal("", size);

    for (int i{}; i < size; i++)
        std::cin >> light_signal[i];
    
    char current_state = 'R';
    
    for (int i{}; i < size; i++) {
        // checks if the machines built in state is matching with the pre-written state
        if (current_state != light_signal[i])
            manual_switch_need++;
        
        // change the next automated state of the machine
        if (light_signal[i] == 'R')
            current_state = 'B';
        else
            current_state = 'R';
    }

    std::cout << manual_switch_need << endl;
}


int main() {
    fastIO();
    int tt{};
    
    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
