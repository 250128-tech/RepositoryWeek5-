//
// Created by xurshid on 10/15/26.
//

// main file
// Easy 1

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int numA = 0;
    int numB = 0;
    numA = ( n % 2 == 0 ? n - 1 : n );
    numB = n - numA;
    while ( numA > 0 ) {
        cout << 'a';
        numA -= 1;
        while ( numB > 0 ) {
            cout << 'b';
            numB = 0;
        }
    }

    return 0;
}