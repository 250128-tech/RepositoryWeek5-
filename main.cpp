//
// Created by xurshid on 10/15/26.
//

// ez4 file
// Medium 4
// idk where cmath came from, i really dunno. and i dunno what it does. but it works, so i left it there, dont ask me what it does. thx.

#include <cmath>
#include <iostream>
using namespace std;

int main() {

    int counter = 0;

    int b, a , l , o , n;
    b = 0;
    a = 0;
    l = 0;
    o = 0;
    n = 0;

    int k; cin >> k;
    int i = 0;
    while (i < k) {
        char x; cin >> x;

        switch ( x ) {
            case 'b':
                b++;
                break;
            case 'a':
                a++;
                break;
            case 'l':
                l++;
                break;
            case 'o':
                o++;
                break;
            case 'n':
                n++;
                break;
            default:
                break;
        }
        i++;
    }

    while ( b > 0 && a > 0 && l > 1 && o > 1 && n > 0) {
        b -= 1;
        a -= 1;
        l -= 2;
        o -= 2;
        n -= 1;

        counter++;

    }

    cout << counter;

    return 0;
}