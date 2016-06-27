#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main() {

    char str[5002];
    cin>>str;

    int len = (int)strlen(str);

    while(true) {

        if(str[0] == '0') break;

        unsigned long long int db[len];

        for(int n = 0; n < len; n++)
        {
            db[n] = 0;
        }
        db[0] = 1;
        int index = 1;

        while(index < len) {
            int temp = (str[index - 1] - '0') * 10;
            temp += str[index] - '0';

            if(str[index] - '0'){
                db[index] = db[index-1];
            }

            if(9 < temp && temp <= 26) {
                int i = 0;
                if(index - 2 >= 0) {
                    i = index -2;
                }
                db[index] += db[i];
            }

            index++;
        }
        int a = len - 1;
        cout << db[a] << endl;

        cin>>str;
        len = (int)strlen(str);

    }

    return 0;
}
