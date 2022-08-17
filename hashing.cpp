#include "hashing.hpp"

int hash_string(string s) {
    int n = s.length(), var = 1;
    int m = 29;         // My Roll Number is 210050026
    int p = 73;	
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += (s[i])*var;
	var = var*p;
    }
    return (sum % m);
}
