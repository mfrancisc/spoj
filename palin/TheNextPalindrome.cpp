#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin>>t;

    string str;
    for(int te = 0; te < t; te++) {

        cin>>str; 
        int len = str.length();

        if(len == 1) {
            int n = (int)str[0];  
            n++;
            cout<<n<<endl;
            continue;
        }

        if(len == 2) {
            str[1] = str[0]; 
            cout<<str<<endl;
            continue;
        }

        string STR1;
        string STR3;
        string STR2 = "";

        // Split STR into two halves STR1 and STR3, if the number of digits in STR is odd, the middle digit will be in STR2 otherwise it is empty
        int mid;
        mid = len / 2;
        STR1 = str.substr(0,  mid);
        if(len % 2 != 0) {
            STR2 = str[mid];
            STR3 = str.substr(mid + 1, mid);
        } else {
            STR3 = str.substr(mid , mid);
        }

        // 1.  If the Reverse of STR1 is greater than STR3, Print STR1 + STR2 + Reverse (STR1) and exit
        int a = 0;
        bool gt = true;
        for(int i = STR1.length() -1; 0 <= i; i--) {

            // char to int
            int f = STR1[i] - '0';
            int s = STR3[a] - '0';

            char r;
            // searching from left to right the first different digit
            if( f != s) {
                if(f < s) {
                    gt = false; 
                    break;
                } else {
                    break; 
                }
            }
            a++;
        }
        if(gt) {
            cout << STR1 << STR2;
            for(int i = STR1.length() -1; 0 <= i; i--) {
                cout << STR1[i];
            }
            cout << endl;
            continue;
        }
        // ------------------------------------------------------------
        // 2. Make all digits of STR3 as '0'
        int STR3len = STR3.length();
        STR3 = string(STR3len, '0');
        // if len is even
        while(len % 2 == 0 ) {
            // increment STR1
            char l = STR1.back();
            STR1.pop_back();
            int last = l - '0';
            last++;
            STR1.append(to_string(last));
            // return up with input (Incremented STR1 + STR3)
            STR1 = STR1 + STR3;
            len = STR1.length(); 
        }
        // len is odd
        while(len % 2 != 0 ) {
            // increment STR2
           int m = stoi(STR2); 
           m++;
           // if incremented STR2 is 10
           if(m == 10) {
               STR2 = '0'; 
               // increment STR1
               char l = STR1.back();
               STR1.pop_back();
               int last = l - '0';
               last++;
               STR1.append(to_string(last));
               STR1 = STR1 + STR2 + STR3;
           } else if ( m < 10) {
               STR1 = STR1 + STR2 + STR3;
           }
           len = STR1.length();
        }

        cout << STR1 << endl;

    }
}
