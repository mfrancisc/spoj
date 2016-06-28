#include <iostream>
#include <map>

using namespace std;

int main() {
    long long int n;
    cin>>n;
    string result = "TAK";
    // collatz conjecture modified
    while(n > 1) {
        if(n % 2 == 0) {
            n /= 2;
        } else {
            //n = (n * 3) + 3; 
            result = "NIE";
            break;
        } 
    }

    cout << result << endl;
}
