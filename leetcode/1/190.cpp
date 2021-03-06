#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <stack>
#include <sstream>
#include <climits>
#include <deque>
#include <set>
#include <utility>
#include <queue>
#include <map>
#include <cstring>
#include <algorithm>
#include <iterator>
#include <string>
#include <cassert>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t zero = 0;
        uint32_t res = 0;
        for (int i = 0; i < 32; ++i) {
            uint32_t b =  ((n & (1 << i)) >> i) << (31 - i);
            zero = zero | b;
        }
        return zero;
    }
};

int main(){
    Solution s;
    int a = s.reverseBits(15);
    cout << a << endl;
    printf("%x\n", a);
    return 0;
}
