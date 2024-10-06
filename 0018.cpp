#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
vector <int> nums[15];
int main(){
    fst
    int t;
    for(int i = 0; i < 15; i++){
        for(int j = 0; j <= i; j++){
            cin>>t;
            nums[i].push_back(t);
        }
    }
    for(int i = 14; i > 0; i--){
        for(int j = 0; j < i; j++){
            nums[i - 1][(j + j + 1) / 2] = (nums[i][j] >= nums[i][j + 1] ? nums[i - 1][(j + j + 1) / 2] + nums[i][j] : nums[i - 1][(j + j + 1) / 2] + nums[i][j + 1]);            
        }
    }
    cout<<nums[0][0];
    return 0;
}