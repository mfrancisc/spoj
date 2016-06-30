#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t) {
        int ngMon;
        int nmMon;
        cin>>ngMon;
        cin>>nmMon;

        int ng = 0;
        int n;
        for(int i = 0; i < ngMon; i++) {
            cin>>n;
            if(ng < n) ng = n;
        }

        int nm = 0;
        int m;
        for(int l = 0; l < nmMon; l++) {
            cin>>m;
            if(nm < m) nm = m;
        }

        if(ng < nm) {
            cout << "MechaGodzilla" << endl;
        } else {
            cout << "Godzilla" << endl; 
        }



        t--;
    }

}
