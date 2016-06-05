#include <cstdio>
#include <map>

using namespace std;

long long int n;
map<int, long long int> memo;

long long int exchange(long long int n) {
    
    if(n == 0) return n;
    
    if(memo[n] != 0) return memo[n];//already found
    
    long long int r = exchange(n/2) + exchange(n/3) + exchange(n/4);
    
    long long int i = max(r, n);
    memo[n] = i;
    
    return i;
}

int main() {
    
    while(scanf("%lld", &n) == 1) {
        printf("%lld\n", exchange(n));
    }
}


