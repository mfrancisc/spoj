#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t,N;
	cin>>t;
	while(t--){
		cin>>N;
		int five_factor = 5;
		int cnt = 0;
		int res;
		do{
			res = N / five_factor;
			cnt += res;
			five_factor *= 5;
		//	cout << "five_f: " << five_factor << endl;
			//cout << "N: " << N << endl;
			
		} while(res);

		cout << cnt << endl;
		
	}


	return 0;
}
