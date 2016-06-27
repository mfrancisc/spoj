#include <iostream>

using namespace std;

int main() {

    double o;

    while(true) {

        cin>>o;
        if(o == 0.00) break;

        double r = 0.00;
        double cards = 1;

        while(r < o) {
            double res = 1/(cards+1);
            r += res;
            cards++;
        }

        cout<<cards-1<< " card(s)" << endl;

    }

}
