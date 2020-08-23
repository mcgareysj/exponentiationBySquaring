#include "fastPowering.h"
#include <iostream>

int fastPowering(int base, int exp, int mod) {
    int bitFlag = 1;
    while(bitFlag < exp) {
        bitFlag = bitFlag << 1;
    }
    int ans = 1;
    while(bitFlag > 0) {
        ans = ans * ans;
        if(bitFlag & exp) {
            ans = ans * base;
        }
        ans = ans % mod;
        bitFlag = bitFlag >> 1;
    }
    return ans;
}

int fastPowering(int base, int exp) {
    int bitFlag = 1;
    while(bitFlag < exp) {
        bitFlag = bitFlag << 1;
    }
    int ans = 1;
    while(bitFlag > 0) {
        ans = ans * ans;
        if(bitFlag & exp) {
            ans = ans * base;
        }
        bitFlag = bitFlag >> 1;
    }
    return ans;
}