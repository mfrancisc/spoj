#include <iostream>
#include <string>
#include <set>

using namespace std;

set<int> palindromes;

int createPalindrome(int n, bool isOdd) {

	int palin = n;

	// remove last digit if odd
	if(isOdd) n /= 10;

	while(n) {
		// append reverse of the number
		palin = palin * 10 + ( n % 10);
		n /= 10;

	}

	return palin;

}

void generatePalindromes(long long maxN) {

	int palin;

	// generate even length and odd length palindromes
	for(int i = 0; i < 2; i++) {
		// generate palindromes till max
		int n = 1;
		while((palin = createPalindrome(n, i % 2)) < maxN){
			cout << palin << endl;
			palindromes.insert(palin);
			n++;
		}
	}

}

int main() {

    int t;
    cin>>t;

generatePalindromes(100000000000000000);

return 0;

    string str;
    for(int te = 0; te < t; te++) {

        cin>>str; 
        int len = str.length();
	cout << "len: " << len << endl;



	// len 1
        if(len == 1) {
            int n = (int)str[0]+1;  
	    str[0] = char(n);
            cout<<str<<endl;
            continue;
	// len 2
        } else if(len == 2) {
		// sx <> dx
		if((int)str[0] < (int)str[1]){
			str[0] = str[1];
		} else if ((int)str[1] < (int)str[0]) {
			str[1] = str[0];
		}else {
		// sx == dx
			int nxt = (int)str[0]+1;
			str[1] = str[0] = (char)nxt;
		}

            cout<<str<<endl;
            continue;
	// len > 2
        } else {
		
		// even len	
		if(len % 2 == 0) {

		// odd len
		} else {
				
		}
	}

    }
}

