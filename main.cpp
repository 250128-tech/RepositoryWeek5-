//
// Created by xurshid on 10/15/26.
//

// ez3 file
// Easy 3
// idk where cmath came from, i really dunno. and i dunno what it does. but it works, so i left it there, dont ask me what it does. thx.

#include <cmath>
#include <iostream>
using namespace std;

int main() {

    int n; cin >> n;
    int i = 0;
    int counter = 0;
    int total = 0;
    while (i < n) {
        i++;
        int x; cin >> x;
        if ( x == 1 ) {
            counter += 1;
        } else {
            counter = 0;
            continue;
        }
        if ( counter > total ) {
            total = counter;
        }
    }

    cout << total;

    return 0;
}