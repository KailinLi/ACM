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
#define REOPEN_READ freopen("/home/martin/X-Brain/Notes/OnlineJudge/input.txt", "r", stdin);
#define REOPEN_WRITE freopen("/home/martin/X-Brain/Notes/OnlineJudge/output.txt", "w", stdout);


class Solution {
public:
    int Cn(int n, int m){
        long long res = 1;
        for (int i = 1; i <= m; ++i) {
            res = res * (n - i + 1) / i;
        }
        return res;
    }

    int climbStairs(int n) {
        int res = 0;
        for (int i = 0; i <= n / 2; ++i) {
            res += Cn(n - i , i);
        }
        return res;
    }
};
int main(){
//    REOPEN_READ
//   REOPEN_WRITE
    Solution s;
    cout << s.climbStairs(44);
    return 0;
}
