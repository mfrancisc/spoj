#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    long long int childs;
    long long int candies;
    for(int i = 0; i < t; i++) {
        cin>>childs;
        long long int total = 0;

        for(int a = 0; a < childs; a++) {
            cin>>candies;
            total = (total + candies) % childs; 
        } 

        if( total == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

