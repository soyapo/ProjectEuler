#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int nums[1000] = {1}, lst, s;
int main(){
    fst
    int t; cin>>t;
    while(t--){
        int mod = 0;
        for(int i = 0; i <= lst; i++){
            nums[i] = nums[i] * 2 + mod, mod = nums[i] / 10, nums[i] = nums[i] % 10;
            if(mod)
                lst = max(lst, i + 1);
        }
    }
    for(int i = 1000; i >= 0; i--)
        if(nums[i]) cout<<nums[i];
    return 0;
}