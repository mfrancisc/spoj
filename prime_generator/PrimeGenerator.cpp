#include <math.h>  
#include <iostream>
#include <list>
using namespace std;

bool isPrime(int s){
    if(s == 1) return false;
    if(s == 2) return true;

    int sq = sqrt(s);

    for(int a = 2; a <= sq; a++){
        int res = s % a;
        if(res == 0 && a != s) return false;
    }

    return true;

}
int main() {
    int t;
    cin>>t;

    int m;
    int n;

    for(int a = 0; a < t; a++){
        cin>>m;
        cin>>n;
        list<int> primes;

        for(int s = m; s <= n; s++) {
            bool prime = isPrime(s);

            if(prime == true){
                primes.push_back(s); 
            } 

        }

        int size = primes.size();
        for(int a = 0; a < size; a++){
            cout << primes.front() << endl;
            primes.pop_front();
        }
    }


    return 0;
}
