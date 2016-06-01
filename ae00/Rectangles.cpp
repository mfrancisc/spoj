#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int nSquares;

    cin>>nSquares;

    int limit = sqrt(nSquares);
    
    int nOfRectangles = 0;
    for(int i = 1; i <= limit; i++) {
        for(int x = i; x <= nSquares; x++) {
            if(i * x <= nSquares) nOfRectangles++; 
        }
    }

    cout << nOfRectangles << endl;

}
