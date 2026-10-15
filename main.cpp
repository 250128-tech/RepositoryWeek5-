//
// Created by xurshid on 10/15/26.
//

// ez2 file
// Easy 2

#include <cmath>
#include <iostream>
using namespace std;

int main() {

    // input
    int Numb; cin >> Numb;

    // declaration
    long long sum = 0;

    if ( Numb < 0 ) {
        Numb = -1;
        sum = -2;
    }



    int i = Numb;
    int pow = 1;

    while ( i > 0 ) {
        i /= 10;
        pow *= 10;
    }

    pow /= 10;

    int j = Numb;

    while ( j > 0 ) {
        sum += ( j % 10 ) * pow;
        pow /= 10;
        j /= 10;
    }

    cout << ( sum == Numb ? "true" : "false" );

    return 0;
}