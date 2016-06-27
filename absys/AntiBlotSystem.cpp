#include <iostream>

using namespace std;

int main() {

    int t;
    cin>>t;

    string op1;
    string add;
    string op2;
    string eq;
    string res;
    while(t) {
        cin>>op1;
        cin>>add;
        cin>>op2;
        cin>>eq;
        cin>>res;

        char* p1;
        int o1;
        long converted = strtol(op1.c_str(), &p1, 10);
        if (*p1) {
            // conversion failed because the input wasn't a number
            o1 = stoi(res) - stoi(op2);
            cout << o1 << " + " << op2 << " = " << res << endl;
            t--; 
            continue;
        }

        char* p2;
        int o2;
        long converted2 = strtol(op2.c_str(), &p2, 10);
        if (*p2) {
            // conversion failed because the input wasn't a number
            o2 = stoi(res) - stoi(op1);
            cout << op1 << " + " << o2 << " = " << res << endl;
            t--; 
            continue;
        }

        char* p3;
        int r;
        long converted3 = strtol(res.c_str(), &p3, 10);
        if (*p3) {
            // conversion failed because the input wasn't a number
            r = stoi(op1) + stoi(op2);
            cout << op1 << " + " << op2 << " = " << r << endl;
        }
        t--; 
    }

}
