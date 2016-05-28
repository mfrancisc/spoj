#include <iostream>

using namespace std;

// find Arithmetic progression or 
// Geometric Progression 
// and Next member
int main() {
    int a1;
    int a2;
    int a3;

    int diff1;
    int diff2;
    int div1;
    int div2;

    while(true) {
        cin>>a1;
        cin>>a2;
        cin>>a3;

        if(a1 == 0 && a2 == 0 && a3 == 0) break;

        // AP
        diff1 = a2 - a1;
        diff2 = a3 - a2;
        if(diff1 == diff2 && diff1 != 0) {
            cout << "AP " << a3 + diff1 << endl; 
            continue;
        }

        // GP
        div1 = a2 / a1;
        div2 = a3 / a2;
        if( div1 == div2 && div1 != 0) {
            cout << "GP " << a3 * div1 << endl;  
        }
    }

    }
