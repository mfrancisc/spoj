#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int test;
    cin>>tests;

    for(int i = 0; i < tests; i++){
        int n;
        cin>>n;
        vector<string> accounts(n);
        for(int x = 0; x < n; x++){
            cin>>accounts[x];
        }

        sort(accounts, n);
    }
    return 0;
}
