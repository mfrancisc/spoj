#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin>>t;

    int stamps;
    int friends;
    int test = 1;
    while(test <= t) {
        cin>>stamps;
        cin>>friends;
        int s[friends];
        int temp;
        for(int i = 0; i < friends; i++) {

            cin>>temp; 
            s[i] = temp;
        } 

        // sort stamps
        std::sort(s, s + friends);

        int totstamps = 0;
        int f = 0;
        for(int l = friends- 1; 0 <= l; l--) {
            totstamps += s[l];
            f++;
            if(totstamps >= stamps) break;
        }

        cout << "Scenario #" << test << ":" << endl;
        if(stamps <= totstamps) {
            cout << f << endl; 
        } else {
            cout << "impossible" << endl; 
        }


        if(t != test){
            cout << endl;
        }

        test++;
    }

}
