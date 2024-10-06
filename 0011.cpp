#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int nums[20][20], s = 0;
    for(int i = 0; i < 20; i++)
        for(int j = 0; j < 20; j++)
            cin>>nums[i][j];
    
    for(int i = 0; i < 20; i++)
        for(int j = 0; j < 17; j++)
            s = max(s, nums[i][j] * nums[i][j + 1] * nums[i][j + 2] * nums[i][j + 3]);
    
    for(int i = 0; i < 20; i++)
        for(int j = 0; j < 17; j++)
            s = max(s, nums[j][i] * nums[j + 1][i] * nums[j + 2][i] * nums[j + 3][i]);
    
    for(int i = 0; i < 17; i++)
        for(int j = 0; j < 17; j++)
            s = max(s, nums[i][j] * nums[i + 1][j + 1] * nums[i + 2][j + 2] * nums[i + 3][j + 3]);
    
    for(int i = 0; i < 17; i++)
        for(int j = 3; j < 20; j++)
            s = max(s, nums[i][j] * nums[i + 1][j - 1] * nums[i + 2][j - 2] * nums[i + 3][j - 3]);
    
    cout<<s;
    return 0;
}