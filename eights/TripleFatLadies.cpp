#include <iostream>

using namespace std;

int main() {
    int t;
    long long int k;
    long long int n;

    cin>>t;
    for(int i = 0; i < t; i++) {
        cin>>n;

        k = 192 + 250 *(n-1);
        cout<<k<<endl;

    }

}
