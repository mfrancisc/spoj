#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin>>n;

    int t;
    while(n) {
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>t;
            a[i] = t; 
        }

        string ambig = "ambiguous";
        for(int e = 0; e < n; e++){ 
            int x = std::distance(a, std::find(a, a + n, e+1));
            x++;
            if(a[e] != x) {
                ambig = "not ambiguous";
                break;
            }
        }
        cout << ambig << endl;

        cin>>n;
    }



}
