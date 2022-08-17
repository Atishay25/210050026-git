#include "hashing.hpp"

int hash_string(string s, int m) {
    int n = s.length();
    int var = 1;
    int p = 73;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += (s[i])*var;
	var = var*p;
    }
    return (sum % m);
}
