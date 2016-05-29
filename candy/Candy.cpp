#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    int n;

    bool run = true;

    while(run) {
        cin>>t;
        // end
        if(t == -1) {
            break; 
        } 

        int total = 0;
        vector <int> candies;
        for(int i = 0; i < t; i++) {
            cin>>n;
            candies.push_back(n);
            total += n;
        } 
        int rest = total % t;
        // impossible to divide candies
        if(rest != 0) {
            cout << "-1" << endl; 
            continue;
        }

        int candiesPack = total / t;
        int moves = 0;
        for(int l = 0; l < candies.size(); l++) {
            int c = candies.at(l);
            while(c < candiesPack) {
                c++;
                moves++; 
            } 
        }

        cout << moves << endl;
    }

}
