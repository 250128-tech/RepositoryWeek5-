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
    int Bottles, Exchange;
    cin >> Bottles >> Exchange;

    int Bin = 0;
    int Counter = 0;

    while ( true ) {
        Counter += Bottles;
        Bottles += Bin;
        Bin = Bottles % Exchange;
        Bottles = Bottles / Exchange;

        if ( Bottles <= 0 && Bin + Bottles < Exchange ) {
            break;
        }
    }

    cout << Counter;

    return 0;
}