#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    long int n;
    long int s;
    long int d;

    while(t) {
        cin>>n;
        s = 1;
        d = 1;
        long int cnt = 1;
        while(cnt < n) {
            d++;
            cnt++;
            while(d>1 && cnt < n) {
                d--;
                s++; 
                cnt++;
            }

            if( cnt == n) break;
            s++;
            cnt++;
            while(s>1 && cnt < n) {
                s--;
                d++; 
                cnt++;
            }
        }

        // result
        cout << "TERM " << n << " IS " << s << "/" << d << endl;

        t--; 
    }

}
