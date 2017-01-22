#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define MAX 500

int multiply(int x, int res[], int res_size);

// school multiplication
int multiply(int x, int res[], int res_size)
{
	int carry = 0;
	for(int i = 0; i < res_size; i++){
		int prod = res[i] * x + carry;
		// store last digit of prod
		res[i] = prod % 10;
		carry = prod / 10;
	}

	while(carry){
		res[res_size] = carry%10;
		carry = carry / 10;
		res_size++;
	}

	return res_size;
}

int main() {

	int t;
	int n;

	cin>>t;
	while(t--) {
		//inizialize res as 1
		int res[160];
		res[0] = 1;
		int res_size = 1;

		cin>>n;

		for(int x = 2; x <= n; x++) {
			res_size = multiply(x, res, res_size);
		}

		// output result in reverse order
		for(int a = res_size - 1; a >= 0; a--) {
			cout << res[a];

		}
		cout << endl;
	}

	return 0;
}
