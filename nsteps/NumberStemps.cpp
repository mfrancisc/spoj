#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int t;
    cin>>t;

    int x;
    int y;
    for(int a = 0; a < t; a++){
        cin>>x;
        cin>>y; 

        // No number if x < y
        if(x < y) {
            cout << "No Number" << endl;
            continue;
        }

        // No number if y < x - 2 
        if(y < x - 2) {
            cout << "No Number" << endl;
            continue;
        }

        // No number if x is even and y is odd 
        if(x%2==0 && y%2!=0) {
            cout << "No Number" << endl;
            continue;
        }

        // No number if x is odd and y is even 
        if(x%2!=0 && y%2==0) {
            cout << "No Number" << endl;
            continue;
        }

        // Number
        if(x%2==0){
            cout << x + y << endl; 
        } else {
            cout << x + y - 1 << endl; 
        }
    }

}
