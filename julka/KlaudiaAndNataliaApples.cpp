#include <iostream>
#include <list>
#include <string>

using namespace std;

void addLeadingZeros(list<char>& a, list<char>& b) {
    int aLen = a.size();
    int bLen = b.size();
    int diff;
    
    //a.size == b.size
    if(aLen == bLen) return;
    
    //a.size > b.size
    if(aLen > bLen) {
        diff = aLen - bLen;
        for(int x = 0; x < diff; x++) {
            b.push_front('0');
        }
    }
    
    //b.size > a.size
    if(bLen > aLen) {
        diff = bLen - aLen;
        for(int x = 0; x < diff; x++) {
            a.push_front('0');
        }
    }
    
}
list<int> sum(list<char> a, list<char> b) {
    int carry= 0;
    int sum = 0;
    int k = 0;
    list<int> result;
    
    // find longest number
    addLeadingZeros(a, b);
    
    // sum
    for( int l = a.size() - 1; 0 <= l; l--) {
        
        // first op
        char n = a.back();
        int first = n-'0';//string to int
        a.pop_back();
        
        // second op
        n = b.back();
        int second = n - '0';// string to int
        b.pop_back();
        
        sum = first + second + carry;
        result.push_front(sum%10);
        carry = sum / 10;
        
    }
    
    // add carry as most significant digit
    if(carry != 0) {
        result.push_front(carry);
    }
    
    return result;
}

list<int> sub(list<char> a, list<char> b){
    list<int>result;
    
    // find longest number
    addLeadingZeros(a, b);
    int size = a.size();
    int borrow = 0;
    int res;
    for(int i = 0; i < size; i++){
        char n = a.back();
        int first = n - '0'; // string to int
        a.pop_back();
        
        n = b.back();
        int second = n - '0';
        b.pop_back();
        
        // regrouping or borrowing
        // borrow from not 0 digit
        
        if(first < second + borrow){
            res = 10 + first - second - borrow;
            borrow = 1;
        } else {
            res = first - second - borrow;
            borrow = 0;
        }
        
        
        result.push_front(res);
    }
    // remove front zeros
    int f = result.front();
    while(f == 0 && result.size() > 1){
        result.pop_front();
        f = result.front();
    }
    
    return result;
    
}

void divByTwo(list<int>& tem){
    list<int> result;
    //int rest = 0;
    int size = tem.size();
    
    int i,j,f,a,b;
    for(i=size-1,a=j=f=0;i>=0;i--)
    {
        int t = tem.front();
        tem.pop_front();
        b=(a*10+t)/2;
        a=(a*10+t)%2;
        if(b)
            f=1;
        if(f){
            result.push_back(b);
            j++;
        }
    }
    if(!j)
    {
    result.push_back(0);
    }
    
    tem = result;
    
}

void print(list<int> &result) {
    
    int resSize = result.size();
    for(int i = 0; i < resSize; i++) {
        cout << result.front();
        result.pop_front();
    }
    cout << endl;
}

int main() {
    for(int t = 0; t < 10; t++) {
        
        list<char> a;
        list<char> b;
        
        string ac;
        cin>>ac;
        for(int i = 0; i < ac.size(); i++) {
            a.push_back(ac[i]);
        }
        
        string bc;
        cin>>bc;
        for(int i = 0; i < bc.size(); i++) {
            b.push_back(bc[i]);
        }
        
        
        list<int> Klaudia = sum(a,b);
        list<int> Natalia = sub(a,b);
        divByTwo(Klaudia);
        divByTwo(Natalia);
        
        print(Klaudia);
        print(Natalia);
    }
}


