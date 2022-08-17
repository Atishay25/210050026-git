#include "hashing.hpp"

int hash_string(string s) {
    int n = s.length(), sum = 0;
    int m = 29;         // My Roll Number is 210050026
    for(int i = 0; i < n; i++){
        sum += int(s[i] - '\0');
    }
    return (sum % m);
}