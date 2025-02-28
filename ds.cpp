#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
map <int, int> nums;
int main(){
    fst
    int n, tmp, mx = 0, cnt = 0; cin>>n;
    
    for(int i = 0; i < n; i++){
        cin>>tmp;
        nums[tmp]++;
    }

    for(auto u: nums){
        if(!cnt)
            tmp = u.first, cnt++;
        else    
            mx = (u.first - tmp > mx ? u.first - tmp : mx), tmp = u.first;
    }    

    cout<<mx;
    return 0;
}