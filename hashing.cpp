#include "hashing.hpp"

int hash_string(string s, int m) {
    int n = s.length(), sum = 0;
    for(int i = 0; i < n; i++){
        sum += int(s[i] - '\0');
    }
    return (sum % m);
}
