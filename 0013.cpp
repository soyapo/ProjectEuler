#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int nums[50], tbl[100][50], s;
int main(){
    fst
    for(int i = 0; i < 100; i++)
        for(int j = 0; j < 50; j++)
            cin>>tbl[i][j];
    for(int j = 49; j > 0; j--){
        for(int i = 0; i < 100; i++)
            s += tbl[i][j];
        nums[j] += s % 10, s /= 10;
    }
    for(int i = 0; i < 100; i++)
        s += tbl[i][0];
    nums[0] += s % 10, s /= 10;
    cout<<s<<'\n';
    for(int i = 0; i < 50; i++)
        cout<<nums[i]<<' ';
    return 0;
}