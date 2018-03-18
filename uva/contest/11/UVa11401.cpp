#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <stack>
#include <sstream>
#include <climits>
#include <forward_list>
#include <deque>
#include <set>
#include <utility>
#include <queue>
#include <map>
#include <cstring>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;
#define REOPEN_READ freopen("/home/martin/X-Brain/Notes/Clang/OnlineJudge/uva/input.txt", "r", stdin);
#define REOPEN_WRITE freopen("/home/martin/X-Brain/Notes/Clang/OnlineJudge/uva/output.txt", "w", stdout);

#define lld long long int
#define maxn (100 * 10000 + 1)
lld res[maxn];

lld f(lld x){
   return ((1 + x - 2) * (x - 2) / 2 - (x - 1) / 2) / 2;
}
int n;
int main(){
    REOPEN_READ
    REOPEN_WRITE

    for(int i = 4; i < maxn; i++) res[i]  = res[i - 1] + f(i);
    while(scanf("%d", &n), n >= 3) printf("%lld\n", res[n]);
    return 0;
}