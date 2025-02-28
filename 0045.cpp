#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
map <int, int> nums;
const int mn = 2e6 + 10;
int main(){
    fst
    for(int i = 1; i < mn; i++)
        nums[i * (i + 1) / 2]++;
    for(int i = 1; i < mn; i++)
        nums[i * (3 * i - 1) / 2]++;
    for(int i = 1; i < mn; i++)
        nums[i * (2 * i - 1)]++;
    for(auto u: nums)
        if(u.second == 3)
            cout<<u.first<<'\n';
    return 0;
}