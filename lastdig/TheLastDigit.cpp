#include <iostream>

using namespace std;

int lastDigitPow(int a, int n) {
    if(n == 0) return 1;

    if( n % 2 == 0) {
        int y = lastDigitPow(a, n/2); 
        return (y * y) % 10;
    } else {
        return (a * lastDigitPow(a, n -1)) % 10; 
    }
}

int main() {
    int t;
    cin>>t;

    int a, n;

    for(int i = 0; i < t; i++) {
        cin>>a;
        cin>>n;

       int result = lastDigitPow(a, n);
       cout << result << endl;
    }

}
