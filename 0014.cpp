#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

const int mn = 1e6 + 10;
int nums[mn] = {0, 0};

long long int coltz(long long int n){
    return (n % 2 ? 3 * n + 1 : n / 2);
}

int calc(long long int n){
    if(n == 1)
        return 0;
    if(n > 1000000)
        return 1 + calc(coltz(n));
    
    return (nums[n] ? nums[n] : nums[n] = 1 + calc(coltz(n)));
}

int main(){
    fst
    int n = 1000000, mx = 0, index = 0;

    for(int i = 1; i < n; i++)
        if(calc(i) > mx)
            index = i, mx = calc(i);

    cout<<index<<' '<<mx;
}