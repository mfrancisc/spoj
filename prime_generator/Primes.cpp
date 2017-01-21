#include <iostream>
#include <fstream>
#include <cmath>
#include <list>

using namespace std;

bool isPrime(int i) {

	if(i == 1) return false;

	for(int a = 2; a <= sqrt(i); a++){
		if(i % a == 0) return false;
	}

return true;

}

int main() {
	int t;
	cin>>t;

	int n,m;
	while(t--){
		list <int> primes;
		cin>>m>>n;
		for(int i = m; i <= n; i++)
		{
			if(isPrime(i)){
				cout << i << endl;	
			}
		}

		cout << endl;
	}

	return 0;
}
