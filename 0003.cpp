#include <bits/stdc++.h>
using namespace std;
#define fst ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main(){
    fst
    int mx = 1;
    map <int, int> primes;
    for(int i = 2; i <= 775147; i++){
        int valid = 1;
        for(auto u: primes){
            if(u.first > sqrt(i))
                break;
            if(i % u.first == 0){
                valid = 0;
                break;
            }
        }
        if(valid)
            primes[i] = 1;
    }
    long long int top = 600851475143;
    for(auto u: primes)
        if(top % u.first == 0)
            mx = max(mx, u.first);
    cout<<mx;
    return 0;
}